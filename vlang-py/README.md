# .v to .so

```bash
v -shared -o test.c test.v

gcc -c -fPIC test.c -o test.o

gcc test.o -shared -o test.so

```


