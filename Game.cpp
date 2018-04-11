
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

#include "Game.h"


Game::~Game()
{
	delete library;
	delete bedroom; 
	delete pigletsRoom;
	delete honeyRoom;
	delete thinkingRoom;
	delete livingRoom;


}

/*The game constructor is responsible for setting up the spatial infrastructure of the game and making the current room pointer point to the first room
 * Pooh enters, the living room. 
 */
Game::Game()
{
	

	library = new Library(backpack);
	bedroom = new Bedroom();
	pigletsRoom = new PigletsRoom();
	honeyRoom = new HoneyRoom();
	thinkingRoom = new ThinkingRoom(backpack);
	livingRoom = new LivingRoom(); 


	// *cite: Project Merrill Christopher Example *****TA Ian said this was acceptable to cite (spaceMap function)

	library->spaceMap(2, livingRoom);
	library->spaceMap(3, bedroom);
	
	livingRoom->spaceMap(4, library);
	livingRoom->spaceMap(3, honeyRoom);
	livingRoom->spaceMap(2, thinkingRoom);

	thinkingRoom->spaceMap(4, livingRoom);
	thinkingRoom->spaceMap(3, pigletsRoom);

	bedroom->spaceMap(1, library);
	bedroom->spaceMap(2, honeyRoom);

	honeyRoom->spaceMap(1, livingRoom);
	honeyRoom->spaceMap(2, pigletsRoom);
	honeyRoom->spaceMap(4, bedroom);

	pigletsRoom->spaceMap(1, thinkingRoom);
	pigletsRoom->spaceMap(4, honeyRoom);



	currentRoom = livingRoom; 

}


//The play game function is responsible for orchestrating the game until time runs out or Pooh accomplishes his goal by finding the insulin. 
void Game::playGame()

{
	
	bool flag = true; 
	cout << endl; 
	cout << "Welcome to Winnie the Pooh's House. Pooh is about to go on an adventure with his friends, but he is running late and is in a hurry to pack. Pooh needs to make sure to not forget to pack his sacred insulin (he's diabetic) or he'll be doomed!! Make sure to find the insulin before the ticker goes to 50!" << endl;
	
	//Game Timer**************
	//Timer will use a count system. Pooh has less than 100 counts to unlock the insulin
	int count = 1; 
	int choice = 0; 

	while (thinkingRoom->getBreakGlass()==0 && count <50)

	{
		cout << endl; 
		cout << "Ticker:" << count << endl; 



		/*
		 *Player status is kept track of through the natural sequence of the game, which is viewed from Winnie the Pooh's perspective.
		 *
		 */

		cout << "| Pooh's Library | Living Room | Thinking Room      |  " << endl; 
		cout << "| Bedroom        | Honey Room  | Piglet's Guest Room|  " << endl; 

		cout << endl; 
		 

		cout << "1. Explore the room" << endl;
		cout << "2. Visit adjoining rooms" << endl;
		cout << "3. Exit" << endl; 

	

		choice = integerInputValidation(1, 3);

		if (choice == 1)

		{

			currentRoom->menu();
		}



		if (choice == 2)

		{

			
			currentRoom = currentRoom->roomMenu();

		
		}


		if (choice == 3)

		{


			//flag = false; 
			thinkingRoom->setBreakGlass();
			count = 100;
			cout << "You have exited" << endl; 


		}
		count++; 



	}
		
}