# progg: main.c mesFonctions.c
# 	clang -o progg main.c mesFonctions.c -I.
# mingw32-make
#./progg
#clang / gcc

CC=clang
CFLAGS=-I.


progg: main.o mesFonctions.o 
	$(CC) -o progg main.o mesFonctions.o 

clean:
	rm -rf *.exe
	rm -rf *.o

struct: struct.o
	$(CC) -o struct struct.o