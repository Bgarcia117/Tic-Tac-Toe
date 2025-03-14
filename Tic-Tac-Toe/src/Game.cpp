#include <iostream>
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

	std::cout << "\n--------Error check---------" << std::endl;
	comp1.displayMembers();
	comp2.displayMembers();

}

// Constructor for player vs computer
Game::Game(std::string name) {
	Board newBoard;

	HumanPlayer human(name);
	ComputerPlayer comp;

	std::cout << "\n--------Error check---------" << std::endl;
	human.displayMembers();
	comp.displayMembers();
}

// Constructor for player vs player
Game::Game(std::string name1, std::string name2) {
	Board newBoard;

	HumanPlayer human1(name1);
	HumanPlayer human2(name2);

	std::cout << "\n--------Error check---------" << std::endl;
	human1.displayMembers();
	human2.displayMembers();

}

void Game::decideLetters() {

}