#include "vending_machine.h"
int main()
{
     welcome_screen();
     getch();
    int q;
    int entered;
    int amount;
    int cancel;
    int select;
    int selection;
    int pence;
    int billreq;
    int change;
    float drinkmax;
    float billmoney;
    float itemprice;
    float coinselected;
    float total;


    selection = menu();
    drinkchosen(selection);




    if(selection >0 && selection <5)
     {
         printf("\n\nPress 1 to continue or 2 to cancel the order\n");
         scanf("%d",&cancel);




         if(cancel==1)


        {
          printf("How  much?(Max 5)\n");
          scanf("%d",&amount);
          if(amount<=5)
          {  itemprice = cost(selection);
             drinkmax=amount*itemprice;
             bill(billmoney);
             x:pence=penceentered();


                      if(pence==5 || pence==10 || pence==20 || pence==50 || pence==100)
                        {
                            while(total<=drinkmax)
                           {
                            total=total+pence;
                            billreq = drinkmax-total;


                            if(total<drinkmax )
                            {
                             printf("\n\nYour outstanding money is %d p", billreq);
                             printf("\n\n");
                             goto x;
                            }


                             else if(total>drinkmax)
                            {
                             change=total-drinkmax;
                             drinktotal(selection,amount);


                                for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                             printf("\n\t\t\tYour change is %d p\n\n",change);
                             printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                            else
                            {
                            drinktotal(selection,amount);
                             for(q=1;q<=amount;q++)
                                {
                                 printf("\t\t\tDrink #%d is being dispensed\n",q);
                                 wait(5);
                                }
                            printf("\n\t\t    ***Thank you and have a nice day!!***");
                             break;
                            }
                           }
                        }
                        else
                        {
                            printf("\nMoney not acceptable!Please Try again!\n\n");
                            goto x;
                        }
                        getc();






          }


        else{
                printf("Maximum quantity is 5. Please try again\n");
                main();
            }
      }
      else


        {
            printf("Your order has been cancelled\n\n");
            main();
        }
     }
   else
   {
       printf("Your order has been cancelled\n\n");
       main();
   }


}
