
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

//The Thinking Room class is derived from the Space class and allows Pooh to interact with the room and visit adjoining rooms. 


#include "ThinkingRoom.h"


//This constructor take a pointer to the backpack so the thinking room can reference the contents of the container. 

ThinkingRoom::ThinkingRoom(string* backpack1)
{
	this->backpack = backpack1;

}


//This function returns a pointer to the Space class and updates where the currentRoom pointer points to depending on the user's selection. 

Space* ThinkingRoom::roomMenu()

{
	cout << "You are now in the thinking room." << endl;
	int choice = 0;

	cout << "1.Go to the Living Room" << endl;
	cout << "2. Go to Piglet's Guest Room" << endl;


	choice = integerInputValidation(1, 2);

	if (choice == 1)

	{
		//currentpointer
		return left;
		//this->right; 

	}


	if (choice == 2)

	{
		//currentRoom->getDown();
		return down;

	}


}


//The menu function allows Pooh to interact with the current room or return to the previous menu. 

void ThinkingRoom::menu()
{

	bool flag = true;

		while (flag == true)


		{
			int choice = 0;
			cout << "You are in the thinking room." << endl;
			cout << "What would you like to do? (Enter the integer to make a choice)" << endl;
			cout << "1. Spray the bees with cayenne pepper. " << endl;
			cout << "2. Break the glass container where the insulin is kept. " << endl;
			cout << "3. Return to previous menu" << endl;


			choice = integerInputValidation(1, 3);
			if (choice == 1)
			{
				specialAction();


			}



			if (choice ==2)
			{
				
				
				if (backpack[0] != "blowtorch")
				{
					
					cout << "It looks like you do not have the blow torch yet. You need to get the blow torch to break the glass!" << endl; 
				}


				else
				{
					
					cout << "Unleasing the BLOW TORCH!!" << endl;
					cout << "You did it Pooh!!! You've captured the insulin!!" << endl;
					
					this->setBreakGlass(); 

					flag = false; 


				}



			}


			if (choice == 3)
			{
				flag = false;


			}




		}

}



//The special action function allows Pooh to change the status of the room. 

void ThinkingRoom::specialAction()

{

	if (backpack[1]!= "cayenne")

	{

		cout << "You need to get the cayenne spray to attack the bees!" << endl;

	}


	if (backpack[1] == "cayenne" && this->getCayenneSprayed() == 1)
	{

		cout << "The bees have died!! You've already sprayed them." << endl;
	}


	if (backpack[1] == "cayenne" && this->getCayenneSprayed()==0)

	{

		cout << " Spraying the bees with cayenne pepper!!" << endl;
		cout << "...." << endl;
		cout << " They're dead! " << endl;
		this->setCayenneSprayed();

	}


	
}



