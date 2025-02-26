#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/Board.h"

Board::Board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}

	srand(time(NULL));
	// Randomly picks a letter to be first player
	playerOne = (rand() % 2) ? 'X' : 'O';
}

void Board::displayBoard() {
	board[0][0] = 'X';
	board[0][1] = 'X';
	board[0][2] = 'X';
	board[1][0] = 'X';
	board[1][1] = 'X';
	board[1][2] = 'X';
	board[2][0] = 'X';
	board[2][1] = 'X';
	board[2][2] = 'X';
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

/*
bool Board::spaceTaken() {

}
*/

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