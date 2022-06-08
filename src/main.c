#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum choice
{
	ROCK,
	PAPER,
	SCISSORS
};

enum game_result
{
	P1_WIN,
	P2_WIN,
	DRAW
};

enum game_result get_winner(enum choice p1, enum choice p2);
enum choice get_choice(char *choice_str);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: RockPaperScissors <p1> <p2>");
		return 1;
	}

	for (int i = 0; argv[1][i] != 0; ++i)
		argv[1][i] = tolower(argv[1][i]);

	for (int i = 0; argv[2][i] != 0; ++i)
		argv[2][i] = tolower(argv[2][i]);

	enum choice p1, p2;
	p1 = get_choice(argv[1]);
	p2 = get_choice(argv[2]);

	if (p1 > 3 || p2 > 3 || p1 < 0 || p2 < 0)
	{
		fprintf(stderr, "Invalid choice.\n");
		return 1;
	}

	enum game_result winner = get_winner(p1, p2);
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

// Checks which player is the winner
enum game_result get_winner(enum choice p1, enum choice p2)
{
	if (p1 == p2)
		return DRAW;
	if (p1 == (p2 + 1) % 3)
		return P1_WIN;
	return P2_WIN;
}

enum choice get_choice(char *choice_str)
{
	enum choice c = 0xff;
	if (strcmp(choice_str, "rock") == 0)
		c = ROCK;
	else if (strcmp(choice_str, "paper") == 0)
		c = PAPER;
	else if (strcmp(choice_str, "scissors") == 0)
		c = SCISSORS;
	return c;
}