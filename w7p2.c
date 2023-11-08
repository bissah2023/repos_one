

/*
*****************************************************************************
 <assessment name example: Workshop - #7 (Part-2)>
Full Name : Franck Willy Bissah Tchinda
Student ID#: 161878236
Email : fwbissah-tchinda@myseneca.ca
Section : ZBB
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include<stdio.h>
#define MAXPATHLENGTH 70
struct PlayerInfo //FOR THE PLAYERS
{
	int lives;
	char character;
	int no_of_treasures;
	int positions[MAXPATHLENGTH];
};
struct GameInfo  //FOR GAME SETTINGS
{
	int max_moves;
	int no_of_positions;
	int bomb[MAXPATHLENGTH];
	int treasures[MAXPATHLENGTH];
	char history[MAXPATHLENGTH];
};
void indent(int num)
{
	int p;
	for (p = 0; p < num; p++)
	{
		printf(" ");
	}
}


int main()
{
    int multiple_of_ten =0;
	int i = 0, j = 0,k;
	int index = 0;
	int beginning, ending;
	const double seventy_five_percent = 0.75;
	struct PlayerInfo player1;
	struct GameInfo game1;
	beginning = 0;
	ending = 0;
	int tens = 0; // for printing tens in game board
	int numbers = 0; // for printing numbers from 0 - 9 repeatedly
        time_t t;
        time(&t);

	printf("================================\n");
	printf("         Treasure Hunt!\n");
	printf("================================\n\n");
	printf("PLAYER Configuration\n--------------------\n");

	printf("Enter a single character to represent the player: ");
	scanf("%c", &player1.character);
	do
	{
		printf("Set the number of lives: ");
		scanf("%d", &player1.lives);
		if (player1.lives < 1 || player1.lives > 10)
		{
			printf("     Must be between 1 and 10!\n");
		}
	} while (player1.lives < 1 || player1.lives > 10);

	printf("Player configuration set-up is complete\n\n");

	printf("GAME Configuration\n------------------\n");

	//for maximum positions available

	do
	{
		printf("Set the path length (a multiple of 5 between 10-70): ");
		scanf(" %d", &game1.no_of_positions);
		if ((game1.no_of_positions >= 10 && game1.no_of_positions <= 70) && (game1.no_of_positions % 5 == 0))
		{
			break;
		}
		else
		{
			printf("     Must be a multiple of 5 and between 10-70!!!\n");
		}
	} while (1);

	//for maximum moves that can be performed

	do
	{
		printf("Set the limit for number of moves allowed: ");
		scanf(" %d", &game1.max_moves);
		if (game1.max_moves < player1.lives || game1.max_moves >(seventy_five_percent * game1.no_of_positions))
		{
			printf("    Value must be between 3 and 26\n");
		}
		else
		{
			break;
		}
	} while (1);


	printf("\nBOMB Placement\n--------------\n");
	printf("Enter the bomb positions in sets of 5 where a value\n");
	printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");




	while (i < (game1.no_of_positions / 5))
	{
		j = i * 5;
		beginning = j + 1;
		ending = (i + 1) * 5;
		printf("   Positions [%2d-%2d]: ", beginning, ending);
		scanf(" %d %d %d %d %d", &game1.treasures[j], &game1.treasures[j + 1], &game1.treasures[j + 2], &game1.treasures[j + 3], &game1.treasures[j + 4]);
		i++;

	}
	for ( k = 0; k < game1.no_of_positions; k++)
	{
		game1.bomb[k] = game1.treasures[k];
	}
	printf("BOMB placement set\n\n");
	printf("TREASURE Placement\n");
	printf("------------------\n");
	printf("Enter the treasure placements in sets of 5 where a value\n");
	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are 35 to set!\n");
	i = 0;



	while (i < (game1.no_of_positions / 5))
	{
		j = i * 5;
		beginning = j + 1;
		ending = (i + 1) * 5;
		printf("   Positions [%2d-%2d]: ", beginning, ending);
		scanf(" %d %d %d %d %d", &game1.treasures[j], &game1.treasures[j + 1], &game1.treasures[j + 2], &game1.treasures[j + 3], &game1.treasures[j + 4]);
		i++;

	}



	printf("TREASURE placement set\n\n");
	printf("GAME configuration set-up is complete...\n\n");
	printf("------------------------------------\n");
	printf("TREASURE HUNT Configuration Settings\n");
	printf("------------------------------------\n");
	printf("Player:\n");
	printf("   Symbol     : %c\n", player1.character);
	printf("   Lives      : %d\n", player1.lives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n\n");
	printf("Game:\n");
	printf("   Path Length: %d\n", game1.no_of_positions);
	printf("   Bombs      : ");
	//looping to print the bomb signatures
	for (i = 0; i < game1.no_of_positions; i++)
	{
		printf("%d", game1.bomb[i]);
	}
	printf("\n");
	printf("   Treasure   : ");
	//looping to produce the treasures
	for (i = 0; i < game1.no_of_positions; i++)
	{
		printf("%d", game1.treasures[i]);
	}
	printf("\n\n");
	printf("====================================\n");
	printf("~ Get ready to play TREASURE HUNT! ~\n");
	printf("====================================\n\n");


	//IMPLIMENTATION PART 2
	player1.no_of_treasures = 0;
	
	for (k = 0; k < MAXPATHLENGTH; k++)
	{
		game1.history[k] = '-';
	}
	while (1)
	{
	    printf("  ");
		for (i = 0; i < game1.no_of_positions; i++)
		{
			printf("%c", game1.history[i]);
		}
		printf("\n  ");
		tens = 0;
		multiple_of_ten =0;
		for (i = 0; i < game1.no_of_positions; i++)
		{
			if ( i != 0 && i == 9+multiple_of_ten)
			{
			    printf("%d", tens + 1);
			    multiple_of_ten += 10;
			}
			else 
			{
				  printf("|");
			}
		}
		tens = 0;
		printf("\n  ");
		for (i = 0; i < game1.no_of_positions; i++)
		{
			if (i == 9+tens && i < game1.no_of_positions)
			{
				numbers = 0;
				printf("%d",numbers);
				tens += 10;
			}
			else
			{
			printf("%d", numbers + 1);
			}
			numbers++;
		}
		numbers =0;
		printf("\n+---------------------------------------------------+\n");
		printf("  Lives: %2d | Treasures: %2d | Moves Remaining: %2d\n", player1.lives, player1.no_of_treasures, game1.max_moves);
		printf("+---------------------------------------------------+\n");
		do
		{
			printf("Next Move [1-20]: ");
			scanf("%d", &index);
			if (index < 1 || index > game1.no_of_positions)
			{
				printf("  Out of Range!!!\n");
			}
		} while (index < 1 || index > game1.no_of_positions);
		  printf("\n");
		
		if (game1.history[index-1] != '-')
		{
			printf("===============> Dope! You've been here before!\n\n");
		}
		else
		{
			if (game1.treasures[index-1] == 1 && game1.bomb[index-1] == 1)
			{
				printf("============== = >[&] !!!BOOOOOM !!![&]\n");
				printf("============== = >[&] $$$ Life Insurance Payout!!![&]\n\n");
				game1.history[index-1] = '&';
				game1.max_moves--;
				player1.no_of_treasures++;
				 
			}
			else if (game1.treasures[index-1] == 1 || game1.bomb[index-1] == 1)
			{
				if (game1.treasures[index-1] == 1)
				{
					printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
					player1.no_of_treasures++;
					game1.treasures[index-1] = '$';
					game1.max_moves--;
				}
				if (game1.bomb[index-1] == 1)
				{
					printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
					game1.history[index-1] = '!';
					player1.lives--;
					game1.max_moves--;
				}
			}
			else if (game1.treasures[index-1] == 0 && game1.bomb[index-1] == 0)
			{
				printf("===============> [.] ...Nothing found here... [.]\n\n");
				game1.history[index-1] = '.';
				game1.max_moves--;
			}

		}
		 if(player1.lives == 0 || game1.max_moves == 0)
	    {
	        break;
	    }
		indent(index+1);
		printf("%c\n", player1.character);
	}
	//end if while looping
	
	
	
	//representing data after looping
	if (player1.lives == 0)
	{
		printf("No mores LIVES remaining!\n\n");
	}
	if (game1.max_moves == 0)
	{
		printf("No more MOVES remaining!\n\n");
	}
	indent(index+1);
		printf("%c\n", player1.character);
	printf("  ");
		for (i = 0; i < game1.no_of_positions; i++)
		{
			printf("%c", game1.history[i]);
		}
		printf("\n  ");
		tens = 0;
		multiple_of_ten =0;
		for (i = 0; i < game1.no_of_positions; i++)
		{
			if ( i != 0 && i == 9+multiple_of_ten)
			{
			    printf("%d", tens + 1);
			    multiple_of_ten += 10;
			}
			else 
			{
				  printf("|");
			}
		}
		tens = 0;
		printf("\n  ");
		for (i = 0; i < game1.no_of_positions; i++)
		{
			if (i == 9+tens && i < game1.no_of_positions)
			{
				numbers = 0;
				printf("%d",numbers);
				tens += 10;
			}
			else
			{
			printf("%d", numbers + 1);
			}
			numbers++;
		}	
	printf("\n+---------------------------------------------------+\n");
	printf("  Lives: %2d | Treasures: %2d | Moves Remaining: %2d\n", player1.lives, player1.no_of_treasures, game1.max_moves);
	printf("+---------------------------------------------------+\n\n");
	printf("##################\n");
	printf("#   Game over!   #\n");
	printf("##################\n\n");
	printf("You should play again and try to beat your score!\n");
	
     printf("%s",ctime(&t));
	return 0;
}
