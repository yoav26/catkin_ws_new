# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from beginner_tutorials/coordinates.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class coordinates(genpy.Message):
  _md5sum = "6d9fdd56a82d84b20d8a69a500869003"
  _type = "beginner_tutorials/coordinates"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float64[] datax
float64[] datay
float64[] dataz
"""
  __slots__ = ['datax','datay','dataz']
  _slot_types = ['float64[]','float64[]','float64[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       datax,datay,dataz

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(coordinates, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.datax is None:
        self.datax = []
      if self.datay is None:
        self.datay = []
      if self.dataz is None:
        self.dataz = []
    else:
      self.datax = []
      self.datay = []
      self.dataz = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.datax)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.datax))
      length = len(self.datay)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.datay))
      length = len(self.dataz)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.dataz))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.datax = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.datay = s.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.dataz = s.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.datax)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.datax.tostring())
      length = len(self.datay)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.datay.tostring())
      length = len(self.dataz)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.dataz.tostring())
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.datax = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.datay = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.dataz = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
