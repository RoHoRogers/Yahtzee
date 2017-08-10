

#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>

#define RULES 1
#define GAME 2
#define EXIT 3


int game_menu (void);
void game_rules (void);
int roll_die (void);
int run_game (int die1, int die2, int die3, int die4, int die5);
int get_sum_one (int die1, int die2, int die3, int die4, int die5);
int get_sum_two (int die1, int die2, int die3, int die4, int die5);
int get_sum_three (int die1, int die2, int die3, int die4, int die5);
int get_sum_four (int die1, int die2, int die3, int die4, int die5);
int get_sum_five (int die1, int die2, int die3, int die4, int die5);
int get_sum_six (int die1, int die2, int die3, int die4, int die5);
int get_three_of_a_kind (int die1, int die2, int die3, int die4, int die5);
int get_four_of_a_kind (int die1, int die2, int die3, int die4, int die5);
int get_small_straight (int die1, int die2, int die3, int die4, int die5);
int get_large_straight (int die1, int die2, int die3, int die4, int die5);
int get_full_house (int die1, int die2, int die3, int die4, int die5);
int get_chance (int die1, int die2, int die3, int die4, int die5);
int get_yahtzee (int die1, int die2, int die3, int die4, int die5);
int choose_combination (int yahtzee, int chance, int full_house, int large_straight, int small_straight, int four_of_a_kind, int three_of_a_kind, int sum_one, int sum_two, int sum_three, int sum_four, int sum_five, int sum_six);
