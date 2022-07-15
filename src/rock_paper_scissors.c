#include "rock_paper_scissors.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Checks which player is the winner
game_result_t get_winner(choice_t p1, choice_t p2)
{
	if (p1 == p2)
		return DRAW;

	if (p1 == (p2 + 1) % 3)
		return P1_WIN;

	return P2_WIN;
}

/*	Takes a string input and maps inputs:
	rock 		->	(choice_t)ROCK
	paper 		->	(choice_t)PAPER
	scissors	->	(choice_t)SCISSORS
	otherwise, prints and error message and exits the program.
*/
choice_t get_choice(char *choice_str)
{
	if (strcmp(choice_str, "rock") == 0)
		return ROCK;

	if (strcmp(choice_str, "paper") == 0)
		return PAPER;
	
	if (strcmp(choice_str, "scissors") == 0)
		return SCISSORS;

	fprintf(stderr, "Invalid choice: %s\n", choice_str);
	exit(1);
}

// Converts an entire string to lowercase
char *strlow(char *str)
{
	for (int i = 0; str[i] != 0; ++i)
	{
		str[i] = tolower(str[i]);
	}
	return str;
}