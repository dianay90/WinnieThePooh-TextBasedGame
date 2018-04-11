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
//The Piglets Room class is derived from the Space class and allows Pooh to interact with the room and visit adjoining rooms. 


#include "PigletsRoom.h"

PigletsRoom::PigletsRoom()
{



}

//This function returns a pointer to the Space class and updates where the currentRoom pointer points to depending on the user's selection. 


Space* PigletsRoom::roomMenu()

{
	cout << "You are now in Piglet's Guest Room." << endl;
	int choice = 0;

	cout << "1.Go to the Thinking Room" << endl;
	cout << "2. Go to the Honey Room" << endl;


	choice = integerInputValidation(1, 2);

	if (choice == 1)

	{
		//currentpointer
		return up;
		//this->right; 

	}


	if (choice == 2)

	{
		//currentRoom->getDown();
		return left;

	}



}


//The menu function allows Pooh to interact with the current room or return to the previous menu. 

void PigletsRoom::menu()
{

	bool flag = true;

		while (flag == true)


		{
			int choice = 0;
			cout << "You are now in Piglet's room." << endl;
			cout << "What would you like to do? (Enter the integer to make a choice)" << endl;
			cout << "1. Close the curtains. " << endl;
			cout << "2. Return to previous menu" << endl;


			choice = integerInputValidation(1, 2);
			if (choice == 1)
			{
				specialAction();


			}




			if (choice == 2)
			{
				flag = false;


			}




		}

}


//The special action function allows Pooh to change the status of the room. 

void PigletsRoom::specialAction()

{

	//previously light are off
	if (this->getCurtains() == 0)

	{

		cout << "You have closed the curtains." << endl;
		this->setCurtains();

	}

	else

	{
		cout << "The curtains are already closed. " << endl;
	}
}