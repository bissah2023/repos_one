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
#define MAXPRODUCTNUM 3
#define MAXGRAMNUM 
typedef struct CatFoodInfo
{
  int SKU;
  double price;
  int calories;
  double weight;
}CatFoodInfo;




int getIntPositive()
{
  int a,b,c;
  int loop = 0;
  printf("------------------------\n");
  printf("Function: getIntPositive\n");
  printf("------------------------\n");
  printf("For each of these tests, enter the following\n");
  printf("three values (space delimited): -1 0 24\n");
  while(loop <MAXPRODUCTNUM)
  {
    printf("\nTEST-%d: ",loop+1);
    scanf("%d %d %d", &a,&b,&c);
    if(a <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     if(b <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     if(c <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     loop++;
   }
}
double getDoublePositive()
{
  double a,b,c;
  int loop = 0;
  printf("------------------------\n");
  printf("Function: getDouble\n");
  printf("------------------------\n");
  printf("For each of these tests, enter the following\n");
  printf("three values (space delimited): -1 0 82.5\n");
  while(loop <3)
  {
    printf("\nTEST-%d: ",loop+1);
    scanf("%lf %lf %lf", &a,&b,&c);
    if(a <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     if(b <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     if(c <= 0)
     {
         printf("ERROR: Enter a positive value: ");
     }
     else
     {
         printf("<PASSED>");
     }
     loop++;
   }
};
void openingMessage()
{
  printf("Cat Food Cost Analysis\n");
  printf("======================\n");
  printf("Enter the details for 3 dry food bags of product data for analysis.\n");
  printf("NOTE: A 'serving' is 64g\n");
};
void getCatFoodInfo(int *my_cat[MAXPRODUCTNUM])
{
    int i ;
    //CatFoodInfo my_cat[MAXPRODUCTNUM];
    for( i = 0 ; i < max ; i++ )
    {
         printf("Cat Food Product #%d\n",i+1);
         printf("--------------------\n");
         printf("SKU           :");
         scanf("%d",&my_cat[i].SKU);
         while(my_cat[i].SKU <= 0)
              {
                  printf("ERROR: Enter a positive value: ");
                   scanf("%d",&my_cat[i].SKU);
             }
         printf("PRICE         : $");
         scanf("%d",&my_cat[i].price);
         while(my_cat[i].price <= 0)
              {
                  printf("ERROR: Enter a positive value: ");
                   scanf("%d",&my_cat[i].price);
             }
         printf("WEIGHT (LBS)  : ");
         scanf("%d",&my_cat[i].weight);
         while(my_cat[i].weight <= 0)
              {
                  printf("ERROR: Enter a positive value: ");
                   scanf("%d",&my_cat[i].weight);
             }
         printf("CALORIES/SERV.: ");
         scanf("%d",&my_cat[i].calories);
         while(my_cat[i].calories <= 0)
              {
                  printf("ERROR: Enter a positive value: ");
                   scanf("%d",&my_cat[i].calories);
             }
             printf("\n");
    }
};    
    void displayCatFoodHeader()
    {
        printf("SKU         $Price    Bag-lbs Cal/Serv\n");
        printf("------- ---------- ---------- --------\n");
    };
    void displayCatFoodData(int max)
    {
       int i;
       CatFoodInfo my_cat[MAXPRODUCTNUM];
        for(i = 0 ; i < max ; i++)
        {
          printf("%07d %10.2lf %10.1lf %8d\n",my_cat[i].SKU,my_cat[i].price,my_cat[i].weight,my_cat[i].calories);
          
        }
};











int main()
{
    CatFoodInfo my_cat[MAXPRODUCTNUM];
   printf("============================\n");
   printf("Pre-testing Helper Functions\n");
   printf("============================\n\n");
   getIntPositive();
   printf("\n\n");
   getDoublePositive();
   printf("\n\n");
   printf("===========================\n");
   printf("Starting Main Program Logic\n");
   printf("===========================\n\n");
   openingMessage();
   printf("\n");
   getCatFoodInfo(MAXPRODUCTNUM);
    
  return 0;
}
