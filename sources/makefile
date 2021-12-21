# progg: main.c mesFonctions.c
# 	clang -o progg main.c mesFonctions.c -I.

CC=gcc
CFLAGS=-I.

progg: main.o mesFonctions.o
	$(CC) -o progg main.o mesFonctions.o

clean:
	rm -rf *.exe
	rm -rf *.o