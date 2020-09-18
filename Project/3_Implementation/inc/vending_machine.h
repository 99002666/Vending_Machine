#ifndef VENDING_H_
#define VENDING_H_

#include<stdio.h>
#include<string.h>
#define system

void menu(void);
void chocolate(void);
void MakePayment();
void end(void);
int PayByCash( int money, int payment );
int PayByCard(char pin[]);

int payment;
int choice;

#endif /* VENDING_H_ */
