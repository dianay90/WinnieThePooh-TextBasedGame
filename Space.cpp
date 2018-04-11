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

//The Space class is the base class and allows the other derived rooms to exist. The Space class also contains the boolean variables and getter and setter functions. 



#include "Space.h"

Space::Space()
{
	right= NULL;
	left = NULL; 
	up = NULL; 
	down = NULL;

	insulin= false;
	tuna= false;
	breakGlass= false;
	cayenneSprayed= false;
	cayenne= false;
	lights= false;
	blowTorch= false;
	makeBed= false;
	honey = false; 
	curtains = false; 




}



void Space::setCurtains()
{

	curtains = true;
}



void Space::setHoney()
{
	
	honey = true; 
}
void Space::setLights()

{
	lights = true; 
}





void Space::setInsulin()
{
	
	insulin = true; 
}


void Space::setTuna()
{
	
	tuna = true; 
}


void Space::setBreakGlass()
{
	
	breakGlass = true; 
}


void Space::setCayenneSprayed()
{
	
	cayenneSprayed = true; 
}


void Space::setCayenne()
{
	
	cayenne = true; 
}
void Space::setBlowTorch()
{
	
	blowTorch = true; 
}
void Space::setMakeBed()
{
	
	makeBed = true; 
}







/*
 *
 *cite: Project Merrill Christopher Example *****TA Ian said this was acceptable to cite
 **/

// *cite: Project Merrill Christopher Example *****TA Ian said this was acceptable to cite

void Space::spaceMap(int direction, Space* room)
{

	//1 North, 2 East, 3 South, 4 West

	if (direction ==1)
	{
		this->up = room;
	}

	if (direction == 2)
	{
		this->right = room;
	}


	if (direction == 3)
	{
		this->down = room;
	}


	if (direction == 4)
	{
		this->left = room;
	}


}
