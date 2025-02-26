#include <iostream>
#include "../include/Board.h"
#include "../include/Player.h"

int main() {
	Board firstBoard;
	std::cout << "Board has been created" << std::endl;
	firstBoard.displayBoard();
	std::cout << firstBoard.isFull() << std::endl;

	Player firstPlayer;
	firstPlayer.checkMemebers();



	return 0;
}