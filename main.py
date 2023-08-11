import ctypes
from pathlib import Path

NUM = 100.9
path = Path.cwd() / 'libfun.so'

fun = ctypes.CDLL(path)

fun.Sum.argtypes = (ctypes.c_float, ctypes.c_float)
fun.Sum.restype = (ctypes.c_float)

returnVale = fun.Sum(NUM, NUM)

print(returnVale)