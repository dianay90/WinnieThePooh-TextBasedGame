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


#ifndef LIBARY_H
#define LIBARY_H

#include <string>
#include <iostream>
#include "Space.h"
#include "inputValidation.h"
#include "ThinkingRoom.h"
using namespace std;

//The Library class is derived from the Space class and allows Pooh to interact with the room and visit adjoining rooms. 

class Library: public Space
{

private: 
	
	string* backpack; 

public: 
	Library(string* backpack ); 

	virtual void menu() override;
	virtual Space* roomMenu() override;
	virtual void specialAction() override;

};

#endif