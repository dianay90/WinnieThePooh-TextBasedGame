
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

#ifndef SPACE_H
#define SPACE_H

#include <string>
#include <iostream>
#include "inputValidation.h"
using namespace std;




class Space
{
protected:
	//location pointers:
	Space* right;
	Space* left;
	Space* up;
	Space* down;

	bool insulin; 
	bool tuna; 
	bool breakGlass;
	bool honey; 
	bool cayenneSprayed;
	bool cayenne; 
	bool lights; 
	bool blowTorch; 
	bool makeBed; 
	bool curtains;



public:
	Space(); 
	
	// *cite: Project Merrill Christopher Example *****TA Ian said this was acceptable to cite
	void spaceMap(int direction, Space* room);


	//shared virtual functions:
	virtual void menu() = 0;         
	//virtual void roomMenu() = 0;   
	virtual Space* roomMenu() = 0;
	virtual void specialAction() = 0; 

//Getters
	Space* getRight() { return right; };
	Space* getLeft() { return left; };
	Space* getUp() { return up; };
	Space* getDown() { return down; };




	//getter functions 

	bool getInsulin() { return insulin; };
	bool getTuna() { return tuna; };
	bool getHoney() { return honey; };
	bool getBreakGlass() { return breakGlass; };
	bool getCurtains() { return curtains; };

	bool getCayenneSprayed() { return cayenneSprayed; };
	bool getCayenne() { return cayenne; };
	bool getLights() { return lights; };
	bool getBlowTorch() { return blowTorch; };
	bool getMakeBed() { return makeBed; };


	//setter functions:

	/*
	void setInsulin(int); 
	void setTuna(int); 
	void setBreakGlass(int); 
	void setCayenneSprayed(int);
	void setCayenne(int);
	void setLights(int);
	void setBlowTorch(int);
	void setMakeBed(int);
	*/


	void setInsulin();
	void setTuna();
	void setBreakGlass();
	void setCayenneSprayed();
	void setHoney(); 
	void setCayenne();
	void setLights();
	void setBlowTorch();
	void setMakeBed();
	void setCurtains(); 
	

};

#endif