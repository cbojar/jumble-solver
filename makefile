CC=clang
CFLAGS=-Wall -s -Oz
LFLAGS=
all:
	make all-combos 
	make combo-finder
	make combo-finder3
	make permute
all-combos:
	mkdir -p 'bin'
	$(CC) $(CFLAGS) -o 'bin/all-combos' 'src/all-combos.c' $(LFLAGS)
combo-finder:
	mkdir -p 'bin'
	$(CC) $(CFLAGS) -o 'bin/combo-finder' 'src/combo-finder.c' $(LFLAGS)
combo-finder3:
	mkdir -p 'bin'
	$(CC) $(CFLAGS) -o 'bin/combo-finder3' 'src/combo-finder3.c' $(LFLAGS)
permute:
	mkdir -p 'bin'
	$(CC) $(CFLAGS) -o 'bin/permute' 'src/permute.c' 'src/check.c' $(LFLAGS)
clean:
	rm -f 'bin/all-combos' 'bin/combo-finder' 'bin/combo-finder3' 'bin/permute'
