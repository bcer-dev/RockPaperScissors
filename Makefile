CC=gcc

build: src/main.c src/rock_paper_scissors.c
	$(CC) $^ -c
	$(CC) main.o rock_paper_scissors.o -o bin/RockPaperScissors
	rm *.o