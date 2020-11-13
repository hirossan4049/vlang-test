import ctypes

lib = ctypes.cdll.LoadLibrary("./testmodule.so")

lib.testmodule__test()
