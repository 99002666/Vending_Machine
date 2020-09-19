/** 
* @file vending_machine.h
* Chocolate Vending machine system
*
*/

#ifndef VENDING_H_
#define VENDING_H_

#include<stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include<string.h>

#define system

/**
*  Displays the menu of vending machine
*/

void menu(void);

/**
* Displays the bill of payment
*/
void chocolate(void);

/**
*  Function to select payment
*  1. Cash
*  2. Credit/Debit Card
*/

void MakePayment();

/**
*  Exit function
*/
void end(void);
/**
*  Function for payment by cash
* @param[in] customer money 
* @param[in] Product price
* @return Sufficient or Insufficient Cash
*/

int PayByCash( int money, int payment );

/**
*  Function for payment by Card
* @param[in] Card PIN 
* @return Valid or Invalid PIN
*/
int PayByCard(char pin[]);

/// Product Price
int payment;

/// Customer Choice
int choice;

#endif /* VENDING_H_ */
