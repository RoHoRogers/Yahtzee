#include "function.h"

int game_menu (void)
{
	int choice = 0;
	do {  
		system ("cls");
		printf ("Yahtzee!!\n\n");
		printf ("1. Print Game Rules.\n");
		printf ("2. Start a game of Yahtzee.\n");
		printf ("3. Exit\n");

		scanf ("%d", &choice);
	} while ((choice < RULES) && (choice > EXIT));
	return choice;

}
void game_rules (void)
{

	printf("\nThe scorecard used for Yahtzee is composed of two sections. A upper section and a lower section. ");
	printf("A total of thirteen boxes or thirteen scoring combinations are divided amongst the sections. ");
	printf("The upper section consists of boxes that are scored by summing the value of the dice matching the");
	printf("faces of the box. If a player rolls four 3's, then the score placed in the 3's box is the sum of the");
	printf("dice which is 12. Once a player has chosen to score a box, it may not be changed and the combination is");
	printf("no longer in play for future rounds. If the sum of the scores in the upper section is greater than or equal");
	printf("to 63, then 35 more points are added to the players overall score as a bonus. The lower section contains a");
	printf("number of poker like combinations.");
	printf("See the table provided below:\n\n");

 

printf("  Name				Combination		 Score\n\n");
printf("Three-of-a-kind	 Three dice with the same face	Sum of all 5 dice\n");
printf("Four-of-a-kind	 Four dice with the same face	Sum of 5 dice\n");
printf("  Full house	One pair and a three-of-a-kind		 25\n");
printf(" Small straight		A sequence of four dice		 30\n");
printf(" Large straight		A sequence of five dice		 40\n");
printf("   Yahtzee		 Five dice with the same face	 50\n");
printf("(think five-of-a-kind)\n");
printf("Chance		May be used for any sequence of dice  Sum of all 5 dice\n");
printf("			   (this is the catch all combination)\n");


system ("pause");
system ("cls");
}

int roll_die (void) //thankfully O'Fallon showed this cause it woulda been tricky otherwise
{
	int die_value = 0;

	die_value = rand () % 6 + 1;

	return die_value;
}
int run_game (int die1, int die2, int die3, int die4, int die5)
{
	int sum_one = 0, sum_two = 0, sum_three = 0, sum_four = 0, sum_five = 0, sum_six = 0,
		sum_three_of_a_kind = 0, sum_four_of_a_kind = 0, sum_full_house = 0, sum_small_straight = 0,
		sum_large_straight = 0, sum_yahtzee = 0, sum_chance = 0;
	int ones1 = 0, twos1 = 0, threes1 = 0, fours1 = 0, fives1 = 0, sixes1 = 0,
		kind3_1 = 0, kind4_1 = 0, house1 = 0, s_str1 = 0, l_str1 = 0, yahtzee1 = 0, chance1 = 0; // I apologize for all the extra declarations
	int ones2 = 0, twos2 = 0, threes2 = 0, fours2 = 0, fives2 = 0, sixes2 = 0,					//I kinda did this a long way and it took me a few tries to figure it out
		kind3_2 = 0, kind4_2 = 0, house2 = 0, s_str2 = 0, l_str2 = 0, yahtzee2 = 0, chance2 = 0;//Some extras are in there to make this better when I come back and update it
	int press = 0, roll = 0, number = 0, game = 0, saves = 0, stop = 0, yahtzee = 0;
	int score1 = 0, score2 = 0, top1 = 0, top2 = 0, round = 1, player = 1;
	char option = '\0', option1 = '\0';

	
	while(round < 14) //start of the loop!
		{		
				system("cls");

				printf("Round %d\n", round);
				printf("Player %d\n", player);
				printf ("\nPress any key in order to role the dice!!\n\n");
				system ("pause");
				die1 = roll_die ();
				printf ("Die 1: %d\n",die1); 
				die2 = roll_die ();
				printf ("Die 2: %d\n",die2);
				die3 = roll_die ();
				printf ("Die 3: %d\n",die3);
				die4 = roll_die ();
				printf ("Die 4: %d\n",die4);
				die5 = roll_die ();
				printf ("Die 5: %d\n\n",die5);
				roll++;
			
				printf ("That is roll number  %d\n\n", roll);
			while (roll < 3)//  || (option1 == 'n') || (option1 == 'N'))  Decided against this after i figured out what to do on line 99
				{
					printf ("Would you like to use this role for a game combination?(Y for yes or N for no)\n\n");
					scanf (" %c", &option1);
				

					if ((option1 == 'y')||(option1 == 'Y'))
						roll = 3; //took me forever to figure out what to put here when i realized i could just set the rolls to 3 to bypass the loop!
								  //it was very exciting when i finally thought of that simple idea!
						
						
					
					else if ((option1 == 'n')||(option1 == 'N'))
					{
						printf("Would you like to keep any of the dice you just rolled? (Y for yes and N for no)\n");
						scanf(" %c", &option);
					
							if ((option == 'y')||(option == 'Y'))
							{
								printf("Would you like to save die one?");
								scanf(" %c", &option);
						
								if ((option  == 'n')||(option == 'N'))
									die1 = roll_die ();
						

									printf("Would you like to save die two?");
									scanf(" %c", &option);
								
								if ((option  == 'n')||(option == 'N'))
									die2 = roll_die ();

								printf("Would you like to save die three?");
								scanf(" %c", &option);
								
								if ((option  == 'n')||(option == 'N'))
									die3 = roll_die ();

									printf("Would you like to save die four?");
									scanf(" %c", &option);
								
								if ((option  == 'n')||(option == 'N'))
										die4 = roll_die ();
							
									printf("Would you like to save die five?");
									scanf(" %c", &option);
								
								if ((option  == 'n')||(option == 'N'))
										die5 = roll_die ();
							
						
							
				printf ("Die 1: %d\n",die1); 
				printf ("Die 2: %d\n",die2);
				printf ("Die 3: %d\n",die3);
				printf ("Die 4: %d\n",die4);
				printf ("Die 5: %d\n",die5);
				roll++;
				printf ("That is roll number  %d\n", roll);
						}
					
					else
					{
						die1 = roll_die ();
						printf ("Die 1: %d\n",die1); 
						die2 = roll_die ();
						printf ("Die 2: %d\n",die2);
						die3 = roll_die ();
						printf ("Die 3: %d\n",die3);
						die4 = roll_die ();
						printf ("Die 4: %d\n",die4);
						die5 = roll_die ();
						printf ("Die 5: %d\n",die5);
						roll++;
							
						printf ("That is roll number  %d\n", roll);
					}
							
			}		
		}			
						
						
								
					
			
		while (roll == 3)
			{
				
				printf("What combination would you like to use?\n");
				printf("(Press the number of the combination you would like to use.)\n\n");
				printf("1. Sum of 1's.\t7. Three of a Kind.\n");
				printf("2. Sum of 2's.\t8. Four of a Kind.\n");
				printf("3. Sum of 3's.\t9. Full House.\n");
				printf("4. Sum of 4's.\t10. Small Straight.\n");
				printf("5. Sum of 5's.\t11. Large Straight.\n");
				printf("6. Sum of 6's.\t12. Yahtzee.\n");
				printf("\t  13. Chance\n");
				printf("NOTE: Entering a number a second time will result in a ZERO score!\n");
				scanf("%d", &number);//I didnt quite finish implimenting my idea to not allow a repeat answer so instead it gives them a zero
				roll++;
			
			}
	if(player == 1)//a very long if statement for the answer corresponding abofe
	{
		if((number == 1)&&(ones1 == 0))
		{
			sum_one = get_sum_one(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 1's score is: %d", sum_one);
			score1 += sum_one;
			top1 += sum_one;
			ones1 = 1;
		}
		if((number == 2)&&(twos1 == 0))
		{
			sum_two = get_sum_two(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 2's score is: %d", sum_two);
			score1 += sum_two;
			top1 += sum_two;
			twos1 = 1;

		}
		if((number == 3)&&(threes1 == 0))
		{
			sum_three = get_sum_three(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 3's score is: %d", sum_three);
			score1 += sum_three;
			top1 += sum_three;
			threes1 = 1;
		}
		if((number == 4)&&(fours1 == 0))
		{
			sum_four = get_sum_four(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 4's score is: %d", sum_four);
			score1 += sum_four;
			top1 += sum_four;
			fours1 = 1;
		}
		if((number == 5)&&(fives1 == 0))
		{
			sum_five = get_sum_five(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 5's score is: %d", sum_five);
			score1 += sum_five;
			top1 += sum_five;
			fives1 = 1;
		}
		if((number == 6)&&(sixes1 == 0))
		{
			sum_six = get_sum_six(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 6's score is: %d", sum_six);
			score1 += sum_six;
			top1 += sum_six;
			sixes1 = 1;
		}
		if((number == 7)&&(kind3_1 == 0))
		{
			sum_three_of_a_kind = get_three_of_a_kind(die1, die2, die3, die4, die5);
			printf("\nYour three of a kind score is: %d", sum_three_of_a_kind );
			score1 += sum_three_of_a_kind;
			kind3_1 = 1;

		}
		if((number == 8)&&(kind4_1 == 0))
		{
			sum_four_of_a_kind = get_four_of_a_kind(die1, die2, die3, die4, die5);
			printf("\nYour four of a kind score is: %d", sum_four_of_a_kind );
			score1 += sum_four_of_a_kind;
			kind4_1 = 1;
		}
		if((number == 9)&&(house1 == 0))
		{
			sum_full_house = get_full_house(die1, die2, die3, die4, die5);
			printf("\nYour full house score is: %d", sum_full_house );
			score1 += sum_full_house;
			house1 = 1;
		}
		if((number == 10)&&(s_str1 == 0))
		{
			sum_small_straight = get_small_straight(die1, die2, die3, die4, die5);
			printf("\nYour small straight score is: %d", sum_small_straight );
			score1 += sum_small_straight;
			s_str1 = 1;
		}
		if((number == 11)&&(l_str1 == 0))
		{
			sum_large_straight = get_large_straight(die1, die2, die3, die4, die5);
			printf("\nYour large straight score is: %d", sum_large_straight );
			score1 += sum_large_straight;
			l_str1 = 1;
		}
		if((number == 12)&&(yahtzee1 == 0))
		{
			sum_yahtzee = get_yahtzee(die1, die2, die3, die4, die5);
			printf("\nYour yahtzee score is: %d", sum_yahtzee );
			score1 += sum_yahtzee;
			yahtzee1 = 1;
		}
		if((number == 13)&&(chance1 == 0))
		{
			sum_chance = get_chance(die1, die2, die3, die4, die5);
			printf("\nYour chance score is: %d", sum_chance);
			score1 += sum_chance;
			chance1 = 1;
		}
		printf("\nYour score is: %d\n", score1);
		system("pause");

	}
	else
	{
		if((number == 1)&&(ones2 == 0))
		{
			sum_one = get_sum_one(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 1's score is: %d", sum_one);
			score2 += sum_one;
			top2 += sum_one;
			ones2 = 1;
		}
		if((number == 2)&&(twos2 == 0))
		{
			sum_two = get_sum_two(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 2's score is: %d", sum_two);
			score2 += sum_two;
			top2 += sum_two;
			twos2 = 1;
		}
		if((number == 3)&&(threes2 == 0))
		{
			sum_three = get_sum_three(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 3's score is: %d", sum_three);
			score2 += sum_three;
			top2 += sum_three;
			threes2 = 1;
		}
		if((number == 4)&&(fours2 == 0))
		{
			sum_four = get_sum_four(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 4's score is: %d", sum_four);
			score2 += sum_four;
			top2 += sum_four;
			fours2 = 1;
		}
		if((number == 5)&&(fives2 == 0))
		{
			sum_five = get_sum_five(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 5's score is: %d", sum_five);
			score2 += sum_five;
			top2 += sum_five;
			fives2 = 1;
		}
		if((number == 6)&&(sixes2 == 0))
		{
			sum_six = get_sum_six(die1, die2, die3, die4, die5);
			printf("\nYour Sum of 6's score is: %d", sum_six);
			score2 += sum_six;
			top2 += sum_six;
			sixes2 = 1;
		}
		if((number == 7)&&(kind3_2 == 0))
		{
			sum_three_of_a_kind = get_three_of_a_kind(die1, die2, die3, die4, die5);
			printf("\nYour three of a kind score is: %d", sum_three_of_a_kind );
			score2 += sum_three_of_a_kind;
			kind3_2 = 1;
		}
		if((number == 8)&&(kind4_2 == 0))
		{
			sum_four_of_a_kind = get_four_of_a_kind(die1, die2, die3, die4, die5);
			printf("\nYour four of a kind score is: %d", sum_four_of_a_kind );
			score2 += sum_four_of_a_kind;
			kind4_2 = 1;
		}
		if((number == 9)&&(house2 == 0))
		{
			sum_full_house = get_full_house(die1, die2, die3, die4, die5);
			printf("\nYour full house score is: %d", sum_full_house );
			score2 += sum_full_house;
			house2 = 1;
		}
		if((number == 10)&&(s_str2 == 0))
		{
			sum_small_straight = get_small_straight(die1, die2, die3, die4, die5);
			printf("\nYour small straight score is: %d", sum_small_straight );
			score2 += sum_small_straight;
			s_str2 = 1;
		}
		if((number == 11)&&(l_str2 == 0))
		{
			sum_large_straight = get_large_straight(die1, die2, die3, die4, die5);
			printf("\nYour large straight score is: %d", sum_large_straight );
			score2 += sum_large_straight;
			l_str2 = 1;
		}
		if((number == 12)&&(yahtzee2 == 0))
		{
			sum_yahtzee = get_yahtzee(die1, die2, die3, die4, die5);
			printf("\nYour yahtzee score is: %d", sum_yahtzee );
			score2 += sum_yahtzee;
			yahtzee2 = 1;
		}
		if((number == 13)&&(chance2 == 0))
		{
			sum_chance = get_chance(die1, die2, die3, die4, die5);
			printf("\nYour chance score is: %d", sum_chance);
			score2 += sum_chance;
			chance2 = 1;
		}
		printf("\nYour score is: %d\n", score2);
		system("pause");




	}

	if (player == 1)//how i switch players and rounds at the end of a turn
	{	
		player = 2;
		
	}
	else
	{	player = 1;
		round++;
	}	

	roll = 0;
	number = 0;
	stop = 0;
	
	}
	if(top1 >= 63)
	{	
		score1 += 35;
		printf("Player 1's top chart is 63 or more points!\n");
		printf("Player 1 is awarded an additional 35 points!\n");
		system("pause");
		system("cls");
	}
	if(top2 >= 63)
	{
		score2 += 35;
		printf("Player 1's top chart is 63 or more points!\n");
		printf("Player 1 is awarded an additional 35 points!\n");
		system("pause");
		system("cls");
	}
	printf("Player 1's score is: %d\n\n", score1);
	printf("Player 2's score is: %d\n\n", score2);

	if(score1 > score2)
		printf("Player 1 WINS!!!");
	if(score1 < score2)
		printf("Player 2 WINS!!!");
	if(score1 == score2)
		printf("It's a tie!!!\n\n Now rock paper scissors it out!\n");

	system("pause");
	system("cls");

}





int get_sum_one (int die1, int die2, int die3, int die4, int die5)
{
  int sum_one = 0;
 if ((die1 == 1)||(die2 == 1)||(die3 == 1)||(die4 == 1)||(die5 == 1))
 {	 
	 if(die1 == 1)
		 sum_one += 1;
     if(die2 == 1)
		 sum_one += 1;
	 if(die3 == 1)
		 sum_one += 1;
	 if(die4 == 1)
		 sum_one += 1;
	 if(die5 == 1)
		 sum_one += 1;
 }
      
	  return sum_one;
  
 }


int get_sum_two (int die1, int die2, int die3, int die4, int die5)	
{
  int sum_two = 0;
  if ((die1 == 2)||(die2 == 2)||(die3 == 2)||(die4 == 2)||(die5 == 2))
  {
	if(die1 == 2)
		sum_two += 2;
	if(die2 == 2)
		sum_two += 2;
	if(die3 == 2)
		sum_two += 2;
	if(die4 == 2)
		sum_two += 2;
	if(die5 == 2)
		sum_two += 2;
  }
  
  return sum_two;
	}

int get_sum_three (int die1, int die2, int die3, int die4, int die5)
{
  int sum_three = 0;
  if ((die1 == 3)||(die2 == 3)||(die3 == 3)||(die4 == 3)||(die5 == 3))
  {
	  if(die1 == 3)
		sum_three += 3;
	  if(die2 == 3)
		sum_three += 3;
	  if(die3 == 3)
		sum_three += 3;
	  if(die4 == 3)
		sum_three += 3;
	  if(die5 == 3)
		sum_three += 3;
  }
  return sum_three;
}

int get_sum_four (int die1, int die2, int die3, int die4, int die5)
{
  int sum_four = 0;
  if ((die1 == 4)||(die2 == 4)||(die3 == 4)||(die4 == 4)||(die5 == 4))
  {
	  if(die1 == 4)
		sum_four += 4;
	  if(die2 == 4)
		sum_four += 4;
	  if(die3 == 4)
		sum_four += 4;
	  if(die4 == 4)
		sum_four += 4;
	  if(die5 == 4)
		sum_four += 4;
  }
  return sum_four;
}

int get_sum_five (int die1, int die2, int die3, int die4, int die5)
{
  int sum_five = 0;
  if ((die1 == 5)||(die2 == 5)||(die3 == 5)||(die4 == 5)||(die5 == 5))
  {
	  if(die1 == 5)
		sum_five += 5;
	  if(die2 == 5)
		sum_five += 5;
	  if(die3 == 5)
		sum_five += 5;
	  if(die4 == 5)
		sum_five += 5;
	  if(die5 == 5)
		sum_five += 5;
  }

  
  return sum_five;
}

int get_sum_six (int die1, int die2, int die3, int die4, int die5)
{
  int sum_six = 0;
  if ((die1 == 6)||(die2 == 6)||(die3 == 6)||(die4 == 6)||(die5 == 6))
  {
	  if(die1 == 6)
		sum_six += 6;
	  if(die2 == 6)
		sum_six += 6;
	  if(die3 == 6)
		sum_six += 6;
	  if(die4 == 6)
		sum_six += 6;
	  if(die5 == 6)
		sum_six += 6;
  }
  
  return sum_six;

}


int get_three_of_a_kind (int die1, int die2, int die3, int die4, int die5)
{
	int sum_three_of_a_kind = 0;
	
	sum_three_of_a_kind = die1 + die2 + die3 + die4 + die5;
	/*if(get_three_of_a_kind)
		{
		if(get_three_of_a_kind != three_of_a_kind)
				{ 
					printf ("Sorry, You already saved that slot.");
					system("pause"); 
					}
			if((die1 == die2) && (die1 == die3) || (die1 == die4) || (die1 == die5))
				{
					sum_three_of_a_kind = die1 + die1 + die1;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
					system("pause");
					return;
				}
				else if((die1 == die3) && (die1 == die4) || (die1 == die5))
				{
					sum_three_of_a_kind = die1 + die1 + die1;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
                    system("pause");
					return;
                }
                else if((die1 == die4) && (die1 == die5))
                {
                    sum_three_of_a_kind = die1 + die1 + die1;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die2 == die3) && (die2 == die4) || (die2 == die5))
                {
                    sum_three_of_a_kind = die2 + die2 + die2;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die2 == die4) && (die2 == die5))
                {
                    sum_three_of_a_kind = die2 + die2 + die2;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die3 == die4) && (die3 == die5))
                {
					sum_three_of_a_kind = die3 + die3 + die3;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
                    system("pause");
                    return;
                }
                else 
				{
					sum_three_of_a_kind = 0;
					printf ("Your score for three of a kind is: %d", &three_of_a_kind);
					+system("pause");
					return;
				}
			}*/
				
	return sum_three_of_a_kind;

	
	
}
int get_four_of_a_kind (int die1, int die2, int die3, int die4, int die5)
{
	int sum_four_of_a_kind = 0;

	sum_four_of_a_kind = die1 + die2 + die3 + die4 + die5;
	/*if(get_four_of_a_kind)
		{
			if((die1 == die2) && (die1 == die3) && (die1 == die4) || (die1 == die5))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die1 == die2) && (die1 == die4) && (die1 == die3) || (die1 == die5))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
                    printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die1 == die2) && (die1 == die5) && (die1 == die3) || (die1 == die4))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die1 == die3) && (die1 == die4) && (die1 == die2) || (die1 == die5))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die1 == die3) && (die1 == die5) && (die1 == die2) || (die1 == die4))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die1 == die4) && (die1 == die5) && (die1 == die2) || (die1 == die3))
                {
                    four_of_a_kind = die1 + die1 + die1 + die1;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else if((die2 == die3) && (die2 == die4) && (die2 == die5))
                {
                    four_of_a_kind = die2 + die2 + die2 + die2;
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
                    system("pause");
                    return;
                }
                else 
				{
					printf ("Your score for four of a kind is: %d", &four_of_a_kind);
					four_of_a_kind = 0;
					system("pause"); 
					return;
				}
				if(get_four_of_a_kind != four_of_a_kind) 
				{ 
					printf ("You have already used you four of a kind.");
					system("pause");
				}
            }*/
	return sum_four_of_a_kind;
}
int get_full_house (int die1, int die2, int die3, int die4, int die5)
{
	int sum_full_house = 0;

	sum_full_house = 25;	
	
	/*if(get_full_house)
		{
	       if((die1 == die2) && (die1 == die3) && (die4 == die5))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die1 == die2) && (die1 == die4) && (die3 == die5))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die1 == die2) && (die1 == die5) && (die3 == die4))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die1 == die3) && (die1 == die4) && (die2 == die5))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die1 == die3) && (die1 == die5) && (die2 == die4))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die1 == die4) && (die1 == die5) && (die2 == die3))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die2 == die3) && (die2 == die4) && (die1 == die5))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die2 == die3) && (die2 == die5) && (die1 == die4))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die2 == die4) && (die2 == die5) && (die1 == die3))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else if((die3 == die4) && (die3 == die5) && (die1 == die2))
                {
                    full_house = die1 + die2 + die3 + die4 + die5;
					printf ("Your score for full house is: %d", &full_house);
                    system("pause");
                    return;
                }
                else
				{ 
					printf ("Your score for full house is: %d", &full_house); 
					full_house = 0; 
					system("pause");
					return;
				}
            }
            if(get_full_house != full_house)
			{ 
				printf ("You already used your Full House.");
				system("pause");
	}*/
	return sum_full_house;
}

int get_small_straight (int die1, int die2, int die3, int die4, int die5)
{
	int sum_small_straight = 0;

	sum_small_straight = 30;
	/*if(get_small_straight)
		{
			if((die1 != die2) && (die1 != die3) && (die1 != die4) && (die1 != die5))
                {
                    if((die2 != die3) && (die2 != die4) && (die2 != die5))
                    {
                        if((die3 != die4) && (die3 != die5))
                        {
                            if(die4 != die5)
                            {
                                if((die1 != '6') && (die2 != '6') && (die3 != '6') && (die4 != '6') && (die5 != '6'))
                                {
                                    small_straight = die1 + die2 + die3 + die4 + die5;
									printf ("Your score for small straight is: %d", &small_straight);
                                    system("pause");
                                    return;
                                }
                                else 
								{
									printf ("Your score for small straight is: %d", &small_straight);
									small_straight = 0; 
									system("pause"); 
									return; 
								}
							}
							else 
								{
									printf ("Your score for small straight is: %d", &small_straight);
									small_straight = 0; 
									system("pause"); 
									return; 
                        }
                        else 
							{
								printf ("Your score for small straight is: %d", &small_straight);
								small_straight = 0; 
								system("pause"); 
									return; 
                    }
					else 
					{
						printf ("Your score for small straight is: %d", &small_straight);
						small_straight = 0; 
						system("pause"); 
						return; 
                }
				else 
				{
					printf ("Your score for small straight is: %d", &small_straight);
					small_straight = 0; 
					system("pause");
					return; 
            }
            else 
			{
				printf ("Your score for small straight is: %d", &small_straight);
				small_straight = 0; 
				system("pause");
				return;
	}
		if(get_small_straight != small_straight)
		{
			printf ("You already used your small_straight");
			system("pause");
			}
						}
					}
			}
	}*/
	return sum_small_straight;
}
int get_large_straight (int die1, int die2, int die3, int die4, int die5)
{
	int sum_large_straight = 0;

	sum_large_straight = 40;
	/*if(get_large_straight)
		{
			if((die1 != die2) && (die1 != die3) && (die1 != die4) && (die1 != die5))
                {
                    if((die2 != die3) && (die2 != die4) && (die2 != die5))
                    {
                        if((die3 != die4) && (die3 != die5))
                        {
                            if(die4 != die5)
                            {
                                if((die1 != '6') && (die2 != '6') && (die3 != '6') && (die4 != '6') && (die5 != '6'))
                                {
                                    large_straight = die1 + die2 + die3 + die4 + die5;
									printf ("Your score for large straight is: %d", &large_straight);
                                    system("pause");
                                    return;
                                }
                                else 
								{
									printf ("Your score for large straight is: %d", &large_straight);
									large_straight = 0; 
									system("pause"); 
									return; 
								}
                            
							else 
								{
									printf ("Your score for large straight is: %d", &large_straight);
									large_straight = 0; 
									system("pause"); 
									return; 
                        }
                        else 
							{
								printf ("Your score for large straight is: %d", &large_straight);
								large_straight = 0; 
								system("pause"); 
									return; 
                    }
					else 
					{
						printf ("Your score for large straight is: %d", &large_straight);
						large_straight = 0; 
						system("pause"); 
						return; 
                }
				else 
				{
					printf ("Your score for large straight is: %d", &large_straight);
					large_straight = 0; 
					system("pause");
					return; 
            }
            else 
			{
				printf ("Your score for large straight is: %d", &large_straight);
				large_straight = 0; 
				system("pause");
				return;
	}
		if(get_large_straight != large_straight)
		{ 
			printf ("You already used your Large Straight."); 
			system("pause");
			}
						}
					}
			}
			}
	}*/
	return sum_large_straight;
}


int get_yahtzee (int die1, int die2, int die3, int die4, int die5)
{
	int sum_yahtzee = 0;

	
	
		if((die1 == die2) && (die1 == die3) && (die1 == die4) && (die1 == die5))
               {
                    sum_yahtzee = 50;
					printf ("You got a Yahtzee worth 50 points.");
                    system("pause");
                }
        else
				{
				printf ("That's Not A Yahtzee!\n");
				system("pause");
				}
	return sum_yahtzee;
}

int get_chance (int die1, int die2, int die3, int die4, int die5)
{
	int sum_chance = 0;

	sum_chance = die1 + die2 + die3 + die4 + die5;
	
	/*if(get_chance)
		{
			chance = die1 + die2 + die3 + die4 + die5;
			printf ("Your score for your chance is: %d", &chance);
            system("pause");
            return;
        }
        else if(get_chance != chance)
		{ 
			printf ("You already used up your chance.");
			system("pause"); 
	}*/
	return sum_chance;
}
						


			

