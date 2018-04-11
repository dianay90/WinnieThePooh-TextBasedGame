/*********************************************************************
** Program name: Final Project
** Author: Diana Oh
** Date: 6/6/2017
** Description: This program utilizes polymorphism, inheritance, pointers, and data structures to create a single player game in which the goal is to obtain an
*item in order to solve the game. The game also involves traversing through a series of rooms and interacting with each room.
*
*Game Summary:
*Pooh-bear traverses a series of rooms in his house all while interacting with the spaces and collecting objects along the way.
*Discovering and using the blowtorch allows him to obtain his vital insulin, thereby solving the game.
*
*The program can be run using the makefile.
**********************************************************************/

/* Input validation function validates user input to ensure it's an integer. It take in arguments integer min and 
integer max to ensure the input the user enters is within that range and returns an int. 
*/



#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H
#include <iostream>
using namespace std;
#include <string>

	int integerInputValidation(int min, int max);
	string stringInputValidation();
	int negativeIntegerInputValidation(int min, int max);

#endif



