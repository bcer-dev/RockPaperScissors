CC=gcc

build: src/main.c
	$(CC) $^ -o bin\RockPaperScissors