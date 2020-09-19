#include "vending_machine.h"


  void menu(void)
{
  printf("*********************************************************************************************\n\n");
  printf("\t\t\t|WELCOME TO CHOCOLATES VENDING MACHINE|\n\n");
  printf("*********************************************************************************************\n");

 printf("1.Select the Chocolates\n");
 printf("2.Make payment\n");
 printf("3.View payment bill\n");
 printf("4.Exit Vending Machine\n");
 printf("5.Exit Program\n\n");
}

void MakePayment()
{
    int option, temp, money;
    char pin[10];
    printf("Select the Payment method\n");
    printf("1.Cash\n");
    printf("2.Credit/Debit card\n");
    scanf("%d", &option);
    if (option == 1)
    {
        printf("Enter your money: ");
      __fpurge(stdin);
        scanf("%d",&money);
        temp = PayByCash(money, payment);
    }
    else
    {
        printf("Slide your Debit/Credit card\n");
        printf("Enter the 4-digit PIN\n");
      __fpurge(stdin);
        scanf("%s", &pin);
        temp = PayByCard(pin);
    }
}

int PayByCash( int money, int payment )
{   
  if (money < payment)
    return -1;
  else
  {
   printf("Your Balance: %d\n\n", money - payment);
   printf("Please collect your cash\n\n");
   return (money - payment);
  }
}

int PayByCard(char pin[])
{   
  int balance = 1000;
   if (strlen(pin) == 4)
   {
       printf("Payment made successfully..\n");
       printf("Your Balance: %d\n\n\n", balance - payment);
       return 2;
   }
   else
   {
       printf("Invalid PIN, Try Again\n\n");
       return 3;
   }
}

void chocolate(void)
{
 char choco[][10] = {"Cadburry Black Forest", "Kitkat", "Crispy", "Crunch", "Mars", "Kinder Bueno","White Kinder Bueno", "Milky Bar", "M&M", "Choki Choki"};
 int u[30];
 char o[30];
 FILE *choclot;
 choclot=fopen("parking.txt","a");
 fprintf(choclot,"Chocolate: %s Total Price: %d\n\n",choco[choice - 1],payment);
 fclose(choclot);
}

void end(void)
{
 system("cls");
 printf("\t\t\tTHANK YOU FOR USING THIS SERVICES\n");
  printf("\t\t\t\t  Visit Us At \n\n");
  printf("\t\t\t    vendingmachine.com.my\n\n\n");
} 
