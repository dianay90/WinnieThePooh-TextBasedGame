
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
//The Living Room class is derived from the Space class and allows Pooh to interact with the room and visit adjoining rooms. 

#include "LivingRoom.h"

LivingRoom::LivingRoom()
{



}


//This function returns a pointer to the Space class and updates where the currentRoom pointer points to depending on the user's selection. 

Space* LivingRoom::roomMenu()

{
	cout << "You are now in the living room." << endl;
	int choice = 0;

	cout << "1.Go to the Library" << endl;
	cout << "2. Go to the Honey Room" << endl;
	cout << "3. Go to the Thinking Room" << endl;


	choice = integerInputValidation(1, 3);

	if (choice == 1)

	{
		//currentpointer
		return left;
		//this->right; 

	}


	if (choice == 2)

	{
		return down;

	}



	if (choice == 3)

	{
		return right;

	}



}


//The menu function allows Pooh to interact with the current room or return to the previous menu. 

void LivingRoom::menu()
{

	bool flag = true
		;
		while (flag == true)


		{
			int choice = 0;
			cout << "You are in the living room." << endl;
			cout << "What would you like to do? (Enter the integer to make a choice)" << endl;
			cout << "1. Feed the cat tuna. " << endl;
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


void LivingRoom::specialAction()

{

	//previously light are off
	if (this->getTuna() == 0)

	{

		cout << "You have fed the cat tuna :)." << endl;
		this->setTuna();

	}

	else

	{
		cout << "You have already fed Tuna. No need to feed her more than once, Pooh." << endl;
	}
}