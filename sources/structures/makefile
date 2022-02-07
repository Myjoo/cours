# progg: main.c mesFonctions.c
# 	clang -o progg main.c mesFonctions.c -I.
# mingw32-make
#./progg
#clang / gcc

CC=clang
CFLAGS=-I.

struct: main.o StructFunc.o
	$(CC) -o struct main.o StructFunc.o

clean:
	rm -rf *.exe
	rm -rf *.o