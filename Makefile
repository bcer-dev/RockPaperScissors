CC=gcc

build: src/main.c
	$(CC) $^ -c
	$(CC) src/rock_paper_scissors.c -c
	$(CC) main.o rock_paper_scissors.o -o bin/RockPaperScissors
	rm *.o