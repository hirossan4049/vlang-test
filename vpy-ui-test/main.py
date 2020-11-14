import ctypes

lib = ctypes.cdll.LoadLibrary("./main.so")

lib.vuipy__run()

