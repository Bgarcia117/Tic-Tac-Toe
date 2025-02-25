#include "../include/Board.h"

Board::Board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
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

bool Board::spaceTaken() {

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
}