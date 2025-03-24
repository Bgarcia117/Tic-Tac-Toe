#include <iostream>
#include <string>
#include <cstdlib> // srand() and rand()
#include <ctime> // time() for seeding srand()
#include "../include/Game.h"
#include "../include/Board.h"
#include "../include/Player.h"
#include "../include/HumanPlayer.h"
#include "../include/ComputerPlayer.h"

// Default constructor
Game::Game() {
	Board newBoard;

	ComputerPlayer comp1;
	ComputerPlayer comp2;

	currentPlayer = 'O';

	decideLetters(comp1, comp2);

	std::cout << "\n--------Error check---------" << std::endl;
	comp1.displayMembers();
	comp2.displayMembers();
	std::cout << "Current Player: " << currentPlayer << std::endl;

}

// Constructor for player vs computer
Game::Game(std::string name) {
	Board newBoard;

	HumanPlayer human(name);
	ComputerPlayer comp;

	currentPlayer = ' ';

	decideLetters(human, comp);
	

	std::cout << "\n--------Error check---------" << std::endl;
	human.displayMembers();
	comp.displayMembers();
	std::cout << "Current Player: " << currentPlayer << std::endl;
}

// Constructor for player vs player
Game::Game(std::string name1, std::string name2) {
	Board newBoard;

	HumanPlayer human1(name1);
	HumanPlayer human2(name2);

	currentPlayer = ' ';

	decideLetters(human1, human2);

	std::cout << "\n-----------------------------------" << std::endl;
	newBoard.displayBoard();

	std::cout << "\n--------Error check---------" << std::endl;
	human1.displayMembers();
	human2.displayMembers();
	std::cout << "Current Player: " << currentPlayer << std::endl;

}


void Game::decideLetters(Player one, Player two) {
	srand(time(NULL));
	int randomNum = rand() % 2;

	// Randomly picks a letter to be first player
	currentPlayer = randomNum ? one.getName() : two.getName();

	one.setLetter(randomNum ? 'O' : 'X');
	two.setLetter(randomNum ? 'X' : 'O');
	
}