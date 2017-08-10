/*
 * Programmer: Kevin Rogers
 * Class: Cpt S 121, Spring 2011; Lab Section 8
 * Programming Assignment: Yahtzee PA #4
 * Date: February 29, 2011  
 *
 * Description: Develop and implement an interactive two-player Yahtzee game. 
				Yahtzee is a dice game that was invented by Milton Bradley and 
				Edwin S. Lowe in 1956. The challenge of the game is to outduel 
				the other player by scoring the most points. Points are obtained 
				by rolling five 6-sided die across thirteen rounds. During each round, 
				each player may roll the dice up to three times to make one of the
				possible scoring combinations. Once a combination has been achieved
				by the player, it may not be used again in future rounds, except for
				the Yahtzee combination may be used as many times as the player makes
				the combination. Each scoring combination has different point totals.
				Some of these totals are achieved through the accumulation of points 
				across rolls and some are obtained as fixed sequences of values. */

#include "function.h"


int main (void)
{
	int choice = 1, die1 = 0, die2 = 0, die3 = 0, die4 = 0, die5 = 0, die_value = 0, press = 0, roll = 0, count = 0, combination = 0, menu = 0, number = 0;
	char yes = '\0', no = '\0';
	int sum_one = 0, sum_two = 0, sum_three = 0, sum_four = 0, sum_five = 0, sum_six = 0;

	int one = 0, two = 0, three = 0, four = 0, five = 0, six = 0;
	srand ((unsigned int) time (NULL));


	
	while (choice)
	{
		switch (game_menu())
		{
			case RULES:
				system("pause");
				system("cls");
				game_rules ();
				
				break;
			case GAME:
				run_game (die1, die2, die3, die4, die5);
				break;
			case EXIT:
				printf ("Goodbye!\n");
				exit(1);
				break;
			default:
				printf ("\nIllegal option. Try again\n\n");
				system("pause");
				break;
		} 
	
	}
return 0;
}