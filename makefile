CC=clang
CFLAGS=-Wall -s -Oz
LFLAGS=
all:
	mkdir -p 'bin'
	$(CC) $(CFLAGS) -o 'bin/permute' 'src/permute.c' 'src/check.c' $(LFLAGS)
clean:
	rm -f 'bin/permute'
