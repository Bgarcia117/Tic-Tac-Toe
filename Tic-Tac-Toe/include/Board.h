#pragma once

class Board {
private:
	char board[3][3];
	char playerOne;

public:
	Board(); // Will fill with empty spaces

	void displayBoard();
	void clearBoard();
	bool isFull();
	// bool spaceTaken();
	void placeLetter(int row, int col, char letter);
	bool winner();
};
