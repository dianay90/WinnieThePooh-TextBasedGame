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
//The Library class is derived from the Space class and allows Pooh to interact with the room and visit adjoining rooms. 


#include "Library.h"

//This constructor take a pointer to the backpack so the library can reference the contents of the container. 


Library::Library(string* backpack1)
{
	this->backpack = backpack1;


}

//This function returns a pointer to the Space class and updates where the currentRoom pointer points to depending on the user's selection. 

Space* Library::roomMenu()

{


	cout << "You are now in the library." << endl; 
	int choice = 0; 

	cout << "1.Go to the Living Room" << endl; 
	cout << "2. Go to the bedroom" << endl;

	choice = integerInputValidation(1, 2); 

	if (choice == 1)

	{
		return right; 

	}


	if (choice == 2)

	{
		return down; 

	}



}


//The menu function allows Pooh to interact with the current room or return to the previous menu. 

void Library::menu() 
{

	bool flag = true;

		while (flag == true)
			

		{
			int choice = 0;
			cout << "You are in the library." << endl;
			cout << "What would you like to do? (Enter the integer to make a choice)" << endl;
			cout << "1. Turn on the light. " << endl;
			cout << "2. Check behind the Winnie Pooh Life-Sized Grand Almanac. " << endl;
			cout << "3. Open the drawer. " << endl;
			cout << "4. Return to previous menu" << endl;


			choice = integerInputValidation(1, 4);
			if (choice == 1)
			{
				specialAction();


			}

		

			
			if (choice == 2)
			{
				//if (this->getBlowTorch() == 0)
				if (backpack[0] != "blowtorch")
				

				{
					cout << "You have found the blow torch!" << endl;
					backpack[0] = "blowtorch";

				

				}

				else
				{
					cout << "You already found the blow torch, Pooh." << endl;

				}

			}

			if (choice == 3)
			{
				if (backpack[1] != "cayenne")
			

				{
					cout << "You have found the cayenne spray!" << endl;
					backpack[1] = "cayenne";

				

				}

				else
				{
					
					cout << "You already added the cayenne spray, Pooh!" << endl; 
				}

			}


			if (choice == 4)
			{
				flag = false; 
				
				
			}




		}

}


//The special action function allows Pooh to change the status of the room. 

void Library::specialAction()

{

	//previously light are off
	if (this->getLights() == 0)

	{

		cout << "The lights have been turned on!" << endl;
		this->setLights();

	}

	else

	{
		cout << "The lights are already on!" << endl; 
	}
}