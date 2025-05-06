#include <iostream>
#include <string>
#include <cstdlib> // srand() and rand()
#include <ctime> // time() for seeding srand()
#include <memory>
#include "../include/Game.h"
#include "../include/Board.h"
#include "../include/Player.h"
#include "../include/HumanPlayer.h"
#include "../include/ComputerPlayer.h"

// Default constructor: Initializes game objects
Game::Game() 
	: playerOne(std::make_unique<ComputerPlayer> ("Computer 1")),
	  playerTwo(std::make_unique<ComputerPlayer> ("Computer 2")) {
	decideLetters(*playerOne, *playerTwo);
}

// Constructor for player vs player
Game::Game(std::string name1, std::string name2) 
	: playerOne(std::make_unique<HumanPlayer> (name1)),
	  playerTwo(std::make_unique<HumanPlayer> (name2)) {
	decideLetters(*playerOne, *playerTwo);
}

// Constructor for player vs computer
Game::Game(std::string name) 
	: playerOne(std::make_unique<HumanPlayer>(name)),
	  playerTwo(std::make_unique<ComputerPlayer>("Computer")) {
	decideLetters(*playerOne, *playerTwo);
}


void Game::decideLetters(Player& one, Player& two) {
	srand(time(NULL));
	int randomNum = rand() % 2;

	// Assigns random letters
	one.setLetter(randomNum ? 'O' : 'X');
	two.setLetter(randomNum ? 'X' : 'O');

	// Randomly Selects a Player to go first
	currentPlayer = randomNum ? one.getLetter() : two.getLetter();
	currentPlayerName = randomNum ? one.getName() : two.getName();
	
}

void Game::run() {
	int row, col;

	while (true) {
		clearScreen();
		board.displayBoard();
		std::cout << currentPlayerName << " (" << currentPlayer << ")'s Turn!" << std::endl;


		do {
			std::cout << "Enter the row number (1-3) for your move: " << std::endl;
			std::cin >> row;
			std::cout << "Enter the column number (1-3) for your move: " << std::endl;
			std::cin >> col;

			if (!board.placeLetter(row, col, currentPlayer)) {
				std::cout << "Invalid Move. Please Try Again." << std::endl;
			}
			else {
				break;
			}

		} while (true);
		
		if (board.winner()) {
			clearScreen();
			board.displayBoard();
			std::string winner = (playerOne->getLetter() == currentPlayer)
				? playerOne->getName()
				: playerTwo->getName();

			std::cout << winner << " wins!" << std::endl;
			break;
		}

		if (board.isFull()) {
			clearScreen();
			board.displayBoard();
			std::cout << "Draw! Game Over!" << std::endl;
			break;
		}

		currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
		currentPlayerName = (playerOne->getLetter() == currentPlayer)
			                 ? playerOne->getName() : playerTwo->getName();
	}
}