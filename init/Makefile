asm_file = $(wildcard init/*.S)
head-y := init/start.o
core-y := init/main.o

init/start.o: $(asm_file)
	$(CC) $(CFLAGS) -E init/start.S -mno-abicalls -I $(MINIBIOSINCLUDE) -o init/start.s
	$(AS) -o init/start.o init/start.s


