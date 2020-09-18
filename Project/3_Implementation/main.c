#include "vending_machine.h"
int main()
{
 int intro;
 int option;
 int money;
 int temp;

e: menu();

 printf("Enter Your Option: ");
 scanf("%d",&intro);
 printf("\n");

 if(intro==1)
 {

w:  printf("----------------------------------------------------------\n\n"); 
  printf("Chocolates\n\n");
  printf("----------------------------------------------------------\n"); 
  printf("1.Choose Chocolate\n");
  printf("2.View A Price To Be Paid\n");
  printf("3.Back To Main Menu\n\n");

  printf("Rules: You can pay using Cash or Credit/Debit card! \n\n\n");

  printf("Enter Your Option: ");
  scanf("%d",&option);
  printf("\n\n");

  if(option==1)
  {
   system("cls");
   printf("Name list of chocolate: ");
   printf("\n\n");
   printf("1. Cadburry Black Forest");          printf("\t50.00\n");
   printf("2. Kitkat");                         printf("\t\t\t20.00\n");
   printf("3. Crispy");                         printf("\t\t\t20.00\n");
   printf("4. Crunch");                         printf("\t\t\t10.00\n");
   printf("5. Mars");                           printf("\t\t\t\t25.00\n");
   printf("6. Kinder Bueno");                   printf("\t\t\t20.00\n");
   printf("7. White Kinder Bueno");             printf("\t\t30.00\n");
   printf("8. Milky Bar");                      printf("\t\t\t25.00\n");
   printf("9. M&M");                            printf("\t\t\t\t10.00\n");
   printf("10. Choki Choki");                    printf("\t\t\t2.00\n");
   printf("\n\n");

   printf("Choose Chocolate: ");
   scanf("%d",&choice);
   printf("\n\n");

   switch(choice)
   {
    case 1 :
     printf("You choose Cadburry Black Forest\n\n");
     goto w;
    case 2 :
     printf("You choose Kitkat\n\n");
     goto w;
    case 3 :
     printf("You choose Crispy\n\n");
     goto w;
    case 4 :
     printf("You choose Crunch\n\n");
     goto w;
    case 5 :
     printf("You choose Mars\n\n");
     goto w;
    case 6 :
     printf("You choose Kinder Bueno\n\n");
     goto w;
    case 7 :
     printf("You choose White Kinder Bueno\n\n");
     goto w;
    case 8 :
     printf("You choose Milky Bar\n\n");
     goto w;
    case 9 :
     printf("You choose M&M\n\n");
     goto w;
    case 10 :
     printf("You choose Choki Choki\n\n");
     goto w;

    default : goto e;
   }
  }
  else if(option==2)
  {
    switch(choice)
   {
    case 1 :
     payment = 50;
     printf("50.00\n\n");
     goto w;
    case 2 :
      payment = 20;
     printf("20.00\n\n");
     goto w;
    case 3 :
     payment = 20;
     printf("20.00\n\n");
     goto w;
    case 4 :
      payment = 10;
     printf("10.00\n\n");
     goto w;
    case 5 :
     payment = 25;
     printf("25.00\n\n");
     goto w;
    case 6 :
     payment = 20;
     printf("20.00\n\n");
     goto w;
    case 7 :
     payment = 30;
     printf("30.00\n\n");
     goto w;
    case 8 :
    payment = 25;
     printf("25.00\n\n");
     goto w;
    case 9 :
     payment = 10;
     printf("10.00\n\n");
     goto w;
    case 10 :
     payment = 2;
     printf("2.00\n\n");
     goto w;
    default : goto e;
   }
  }
  else
   goto e;
 }

 else if(intro==2)
 {

   if(choice==1)
   {
    printf("Your payment is Rs.50");
    printf("\n\n");
    choc[0]=payment;
   }
   if(choice==2)
   {
    printf("Your payment is Rs.20");
    printf("\n\n");
    choc[1]=payment;
   }
   if(choice==3)
   {
    printf("Your payment is Rs.20");
    printf("\n\n");
    choc[2]=payment;
   }
   if(choice==4)
   {
    printf("Your payment is Rs.10");
    printf("\n\n");
    choc[3]=payment;
   }
   if(choice==5)
   {
    printf("Your payment is Rs.25");
    printf("\n\n");
    choc[4]=payment;
   }
   if(choice==6)
   {
    printf("Your payment is Rs.20");
    printf("\n\n");
    choc[5]=payment;
   }
   if(choice==7)
   {
    printf("Your payment is Rs.30");
    printf("\n\n");
    choc[6]=payment;
   }
   if(choice==8)
   {
    printf("Your payment is Rs.25");
    printf("\n\n");
    choc[7]=payment;
   }
   if(choice==9)
   {
    printf("Your payment is Rs.10");
    printf("\n\n");
    choc[8]=payment;
   }
   if(choice==10)
   {
    printf("Your payment is Rs.2");
    printf("\n\n");
    choc[9]=payment;
   }
   MakePayment();
   goto e;
 }

  else if(intro==3)
  {
    chocolate();
    goto e;
  }
 else if(intro==4)
 {
  printf("Enjoy it!");

   if(choice==0)
   {
    printf("Thank you and enjoy your Cadburry Black Forest!");
    printf("\n\n");
    choc[0]=0;
    goto e;
   }
   if(choice==1)
   {
    printf("Thank you and enjoy your Kitkat!");
    printf("\n\n");
    choc[1]=0;
    goto e;
   }
   if(choice==2)
   {
    printf("Thank you and enjoy your Crispy!");
    printf("\n\n");
    choc[2]=0;
    goto e;
   }
   if(choice==3)
   {
    printf("Thank you and enjoy your Crunch!");
    printf("\n\n");
    choc[3]=0;
    goto e;
   }
   if(choice==4)
   {
    printf("Thank you and enjoy your Mars!");
    printf("\n\n");
    choc[4]=0;
    goto e;
   }
   if(choice==5)
   {
    printf("Thank you and enjoy your Kinder Bueno!");
    printf("\n\n");
    choc[5]=0;
    goto e;
   }
   if(choice==6)
   {
    printf("Thank you and enjoy your White Kinder Bueno!");
    printf("\n\n");
    choc[6]=0;
    goto e;
   }
   if(choice==7)
   {
    printf("Thank you and enjoy your Milky Bar!");
    printf("\n\n");
    choc[7]=0;
    goto e;
   }
   if(choice==8)
   {
    printf("Thank you and enjoy your M&M!");
    printf("\n\n");
    choc[8]=0;
    goto e;
   }
   if(choice==9)
   {
    printf("Thank you and enjoy your Choki Choki!");
    printf("\n\n");
    choc[9]=0;
    goto e;
   }
   else
   {
    printf("Error! Try Again.\n\n");
    goto e;
   }
 }
  else
  end();
return 0;
}
