#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/Board.h"

Board::Board() {
	// Initalizes the board with empty spaces
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}

	srand(time(NULL));
	// Randomly picks a letter to be first player
	playerOne = (rand() % 2) ? 'X' : 'O';
}

// Displays the board on the console
void Board::displayBoard() {
	std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
	std::cout << "-------------" << std::endl;
	std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
}

void Board::clearBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

bool Board::isFull() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] == ' ') {
				return false;
			}
		}
	}

	return true;
}


bool Board::spaceTaken(int row, int col) {
	return board[row - 1][col - 1] != ' ';
}


bool Board::winner() {
	// Checks rows
	for (int i = 0; i < 3; i++) {
		if ((board[i][0] != ' ') && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
			return true;
		}
	}

	// Checks columns
	for (int j = 0; j < 3; j++) {
		if ((board[0][j] != ' ') && (board[0][j] == board[1][j]) && (board[1][j] == board[2][j])) {
			return true;
		}
	}

	// Checks main diagonal
	if ((board[0][0] != ' ') && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
		return true;
	}

	// Checks anti-diagonal
	if ((board[0][0] != ' ') && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
		return true;
	}

	return false;
}

void Board::placeLetter(int row, int col, char letter) {
	if (isFull()) {
		std::cout << "The board is full. Draw!" << std::endl;
	}
	else if (spaceTaken()) {
		std::cout << "That space is already taken, please try again." << std::endl;
	}
	else {
		board[row - 1][col - 1] = letter;
	}
}
