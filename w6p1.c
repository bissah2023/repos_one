#include <stdio.h>
#define MAXINCOME 400000.00
#define MININCOME 500.00
#define MAXITEM 10
#define COSTLIMIT 100.00

/*
*****************************************************************************
 <assessment name example: Workshop - #6 (Part-1)>
Full Name : Franck Willy Bissah Tchinda
Student ID#:161878236
Email :fwbissah-tchinda@myseneca.ca
Section :ZBB
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS

int
main ()
{
//VARIABLES
  double income;
  double total = 0;
  int no_items;
  int enter;

  printf ("+--------------------------+\n");
  printf ("+   Wish List Forecaster   |\n");
  printf ("+--------------------------+\n\n");

  while (1)
    {
      printf ("Enter your monthly NET income: $");
      scanf ("%lf", &income);
      if (income < MININCOME)
	{
	  printf
	    ("ERROR: You must have a consistent monthly income of at least $%0.2lf\n\n", MININCOME);
	}
      else if (income > MAXINCOME)
	{
	  printf
	    ("ERROR: Liar! I'll believe you if you enter a value no more than $%0.2lf\n\n",
	     MAXINCOME);
	}
      else			// if(income >= MININCOME && income <= MAXINCOME)
	{
	  printf ("\n");
	  break;
	}
    }


  while (1)
    {
      printf ("How many wish list items do you want to forecast?: ");
      scanf ("%d", &no_items);
      if (no_items > MAXITEM || no_items <= 0)
	{
	  printf ("ERROR: List is restricted to between 1 and 10 items.\n\n");
	}
      else
	{
	  printf ("\n");
	  break;
	}
    }
  //arrays declaration
  double cost[MAXITEM];
  int prior[MAXITEM];
  char finance[MAXITEM];

  for (int i = 0; i < no_items; i++)
    {
      printf ("Items-%d Details:\n", i + 1);
      do{
      printf ("   Item cost: $");
      scanf ("%lf", &cost[i]);
      if(cost[i]<100)
      {
        printf("      ERROR: Cost must be at lest $%0.2lf\n",COSTLIMIT);
      }
      }while(cost[i] <100 );
      
      while (1)
    	{
	       printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
	       scanf (" %d", &prior[i]);
	       
	       if (prior[i] == 1 || prior[i] == 2 || prior[i] == 3)
		    {
		       break;
	    	}
	        else
	    	{
	    	    printf ("      ERROR: Value must be between 1 and 3\n");
	    	}
	      
	    
	}
      while (1)
	{
	  printf ("   Does this item have financing options? [y/n]: ");
	  scanf (" %c", &finance[i]);
	  if (finance[i] == 'n' || finance[i] == 'y')
	    {
	      break;
	    }
	  else if (finance[i] != 'y' || finance[i] != 'n')
	    {
	      printf ("      ERROR: Must be a lowercase 'y' or 'n'\n");
	    }
	}
      printf ("\n");
    }
  printf ("Item Priority Financed        Cost\n");
  printf ("---- -------- -------- -----------\n");

  for (int i = 0; i < no_items; i++)
    {
      printf ("%3d  %5d    %5c    %11.2lf\n", i + 1, prior[i], finance[i],
	      cost[i]);
      total += cost[i];
    }


  printf ("---- -------- -------- -----------\n");
  printf ("                      $%11.2lf\n\n", total);
  printf ("Best of luck in all your future endeavours!");

  return 0;

}