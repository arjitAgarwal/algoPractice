CC=gcc
CFLAGS=-I.
HDR_FILES = utils.h merge_sort.h
OBJ = merge_sort.o utils.o main.o

%.o: %.c $(HDR_FILES)
	$(CC) -c -o $@ $< $(CFLAGS)

output: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)