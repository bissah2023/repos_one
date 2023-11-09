/*
*****************************************************************************
 <assessment name example: Workshop - 8 (Part-1)>
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
#include <stdio.h>
//HEADER FILE EXTRACT
#define MAXPRODUCTNUM
#define MAXGRAMNUM 
typedef struct CatFoodInfo()
{
  int ID;
  double price;
  int calories;
  double weight;
}CatFoodInfo;
//now declaring a 7 functions sys
int getIntPositive(
double getDoublePositive(
void openingMessage(
CatFoodInfo 
getCatFoodInfo(MAXPRODUCTNUM);
void displayCatFoodData(
// int are passed by value and double my address
void start(


//ENd of headerfile content
int start()
{
    CatFoodInfo my_cat[MAXPRODUCTNUM];
   printf("============================\n");
   printf("Pre-testing Helper Functions\n");
   printf("============================\n\n");
    
    
    
  
  return 0;
}
int getIntPositive(int num)
{
  int a,b,c;
  int loop = 0;
  printf("------------------------\n");
  printf("Function: getIntPositive\n"):
  printf("------------------------\n");
  printf("For each of these tests, enter the following\n");
  printf("three values (space delimited): -1 0 24\n");
  while(loop <3)
  {
    printf("\nTEST-1: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     if(b <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     if(c <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     loop++;
   }
}
double getDoublePositive()
{
  double a,b,c;
  double loop = 0;
  printf("------------------------\n");
  printf("Function: getDouble\n"):
  printf("------------------------\n");
  printf("For each of these tests, enter the following\n");
  printf("three values (space delimited): -1 0 82.5\n");
  while(loop <3)
  {
    printf("\nTEST-1: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    if(a <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     if(b <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     if(c <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>")
     }
     loop++;
   }
};
void openingMessage()
{
  printf("Cat Food Cost Analysis\n");
  printf("======================\n");
  printf("Enter the details for 3 dry food bags of product data for analysis.\n");
  printf("NOTE: A 'serving' is 64g\n"):
};
void getCatFoodInfo(MAXPRODUCTNUM)
{
    printf("Cat Food Product #1\n");
    printf("--------------------\n");
};



