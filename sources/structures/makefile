# progg: main.c mesFonctions.c
# 	clang -o progg main.c mesFonctions.c -I.
# mingw32-make
#./progg
#clang / gcc

CC=clang
CFLAGS=-I.
DEPS = Struct.h StructFunc.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

struct: main.o StructFunc.o 
	$(CC) -o struct main.o StructFunc.o

files: files.o
	$(CC) -o files files.o 

clean:
	rm -rf *.exe
	rm -rf *.o