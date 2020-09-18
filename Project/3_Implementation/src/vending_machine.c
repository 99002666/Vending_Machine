#include <vending_machine.h>


   void welcome_screen()
   {
        printf("\t\t\tWelcome to our Vending Machine!\n\n");
        printf("\t\t\tCopyright Coca-Cola 2014 and 1356602\n\n");
        printf("\t\t\tPress any key to continue.\n\n\n\n");
       return;
   }


   void bill(float billmoney)
   {
       printf("Total amount to be payed is: %.2f\n\n\n",billmoney);
       return;
   }




int penceentered()
   {
        int pence;
        printf("Enter your money: \n");
        printf("(5p 10p 20p 50p 100p)\n");
        scanf("%d",&pence);


       return pence;
   }


    int menu()
    {
  int selection;


    printf("---------------------- \n");


    printf("MENU: ");
    printf("\n\n");
    printf("1. Coca-Cola");            printf("\t\t\t£1.00\n");
    printf("2. Sprite");               printf("\t\t\t£1.30\n");
    printf("3. Fanta");                printf("\t\t\t£1.20\n");
    printf("4. Dr. Pepper");           printf("\t\t\t£1.50\n");
    printf("5. Quit");
    printf("\n\n");


    printf("Please enter your selection: ");
    scanf("%d",&selection);


    return selection;


    }






    void drinkchosen(int selection)
{
switch(selection)
{
    case 1:
printf("You have selected Coca-Cola.");            printf("\t\t\t£1.00\n");
      break;
   case 2:
printf("You have selected Sprite.");               printf("\t\t\t£1.30\n");
      break;
   case 3:
printf("You have selected Fanta.");                printf("\t\t\t£1.20\n");
      break;
   case 4:
printf("You have selected Dr. Pepper.");           printf("\t\t\t£1.50\n");
      break;
   case 5:
      break;
   default:
      printf("Invalid input!\n");
      break;
}
return;
}




    float cost(int selection)
 {
  float price = 0;


  switch(selection)
  {
     case 1:
       price = 1.00;
       break;
     case 2:
       price = 1.30;
       break;
     case 3:
       price = 1.20;
       break;
    case 4:
       price = 1.50;
       break;
   }
   return price;
 }


void wait(int seconds)
{
    clock_t end_wait=(clock() + (seconds * CLOCKS_PER_SEC));
    while(clock()<end_wait)
    {}
}


void drinktotal(int selection,int amount)
    {
      switch(selection)
      {
      case 1:
         printf("\n\n\t\t\tYou have selected %d Coca-Cola\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 2:
         printf("\n\n\t\t\tYou have chosen %d Sprite\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 3:
         printf("\n\n\t\t\tYou have chosen %d Fanta\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      case 4:
         printf("\n\n\t\t\tYou have chosen %d DR Pepper\n",amount);
         printf("\t\t\t----------------------------\n");
         break;
      default:
         printf("Invalid input!\n");
         break;
      }
 }
