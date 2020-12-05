#!/usr/bin/env python

import math
import numpy as np
import rospy
import time
from std_msgs.msg import Float32MultiArray
from jacobi import jacobi
from jacobi import force_calc
from save2file import create

DEG2RAD = math.pi / 180
POS2RAD = (2 * math.pi) / 4096
RAD2POS = 4096 / (2 * math.pi)
ZERO_OFFSET = 4096/2

thetas = [0, 0, 0, 0, 0]
tourqe_arr = np.array([0, 0, 0])
tourqes_msg = Float32MultiArray()
force_msg = Float32MultiArray()

pub_tourqe = rospy.Publisher("write/force", Float32MultiArray, queue_size=10)


def cb_tourqe(data):
    global tourqe_arr
    tourqe_raw = list(data.data)
    tourqe_arr = np.interp(tourqe_raw, [-1000, 1000], [-2500, 2500])
    # rospy.loginfo(tourqe_arr)

def cb_angles(data):
    global thetas
    global tourqe_arr
    global last_time
    # thetas = data.data
    thetas[0] = (data.data[0] - ZERO_OFFSET) * POS2RAD  # <TODO> modulo or subtraction ?
    thetas[1] = (data.data[1] - ZERO_OFFSET) * POS2RAD
    thetas[2] = (data.data[2] - ZERO_OFFSET) * POS2RAD

    j_mat = jacobi(thetas)
    force = force_calc(j_mat, tourqe_arr, thetas)
    force_msg.data = force
    rospy.loginfo(force_msg)
    pub_tourqe.publish(force_msg)
    create(force, 'force.csv')  # write to file
    create(tourqe_arr, 'tourqe.csv')  # write to file


def force():

    rospy.init_node('force', anonymous=True)
    rospy.Subscriber("read/load", Float32MultiArray, cb_tourqe)

    rospy.Subscriber("write/angles", Float32MultiArray, cb_angles)
    # rospy.Subscriber("read/angles_read", Float32MultiArray, cb_angles)

    '''while not rospy.is_shutdown():
            rospy.loginfo(tourqe_arr)
            pub_tourqe.publish(force_msg)      
        rate.sleep()'''

    rospy.spin()


if __name__ == '__main__':
    try:
        force()
    except rospy.ROSInterruptException:
        pass
