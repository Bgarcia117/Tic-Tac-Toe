#pragma once

class Board {
private:
	char board[3][3];

public:
	Board(); // Will fill with empty spaces

	void clearBoard();
	bool isFull();
	bool spaceTaken();
	bool winner();
};
