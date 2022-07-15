#ifndef ROCK_PAPER_SCISSORS_H
#define ROCK_PAPER_SCISSORS_H

typedef enum choice { ROCK, PAPER, SCISSORS } choice_t;
typedef enum game_result { P1_WIN, P2_WIN, DRAW } game_result_t;

game_result_t get_winner(choice_t p1, choice_t p2);
choice_t get_choice(char *choice_str);

char *strlow(char *str);

#endif // ROCK_PAPER_SCISSORS_H

