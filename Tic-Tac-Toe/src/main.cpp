#include <iostream>
#include "../include/Board.h"
#include "../include/Player.h"
#include "../include/Game.h"

int main() {
	int userChoice = -1;
	std::string firstPlayer = "NONE";
	std::string secondPlayer = "NONE";

	std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;

	while (userChoice != 1 && userChoice != 2) {
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Please make a selection(1-2): " << std::endl;
		std::cout << "1) Local 2-Player" << std::endl;
		std::cout << "2) Play against the computer" << std::endl;
		std::cin >> userChoice;

		if (userChoice != 1 && userChoice != 2) {
			std::cout << "Please make a valid selection: " << std::endl;
		}
	}

	switch (userChoice) {
	    case 1:
			std::cout << "-----------------------------------" << std::endl;
			std::cout << "Player 1: \nEnter your name: " << std::endl;
			std::cin >> firstPlayer;

			std::cout << "Player 2: \nEnter your name: " << std::endl;
			std::cin >> secondPlayer;

			Game(firstPlayer, secondPlayer);
			break;

		case 2:
			std::cout << "Enter your name: " << std::endl;
			std::cin >> firstPlayer;

			Game(firstPlayer);
			break;
	}




	return 0;
}