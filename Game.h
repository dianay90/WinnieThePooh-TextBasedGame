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

/*The game class is responsible for creating the spatial infrastructure of the game and allowing Pooh to be in the game space until he either accomplishes his goal or time 
runs out. */
#ifndef GAME_H 
#define GAME_H

#include <string>
#include <iostream>
#include "Space.h"
#include "ThinkingRoom.h"
#include "PigletsRoom.h"
#include "Library.h"
#include "Bedroom.h"
#include "HoneyRoom.h"
#include "LivingRoom.h"


#include "inputValidation.h"

using namespace std;

class Game
{

private:


	//TA JASON approved backpack being in game class 

	string backpack[3];

	Space* library;
	Space* bedroom;
	Space* pigletsRoom;
	Space* honeyRoom;
	Space* livingRoom;
	Space* thinkingRoom;

	Space* currentRoom; 

public:
	void playGame();
	Game(); 
	~Game(); 




};
#endif