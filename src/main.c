#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "rock_paper_scissors.h"

int main(int argc, char **argv)
{
	// Ensure no more or no less than two arguments are passed
	if (argc != 3)
	{
		fprintf(stderr, "Usage: RockPaperScissors <p1> <p2>");
		return 1;
	}

	// Convert both inputs to lowercase
	strlow(argv[1]); 
	strlow(argv[2]);

	// Get user choices
	choice_t p1 = get_choice(argv[1]);
	choice_t p2 = get_choice(argv[2]);

	// Check which player won
	game_result_t winner = get_winner(p1, p2);
	printf("Player 1: %s\n", argv[1]);
	printf("Player 2: %s\n", argv[2]);
	printf("------------------\n");

	switch (winner)
	{
		case P1_WIN:
			printf("Player 1 wins!\n");
			break;
		case P2_WIN:
			printf("Player 2 wins!\n");
			break;
		default:
			printf("DRAW!\n");
			break;
	}

	return 0;
}