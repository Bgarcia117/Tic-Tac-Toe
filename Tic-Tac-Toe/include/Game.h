#pragma once

#include <string>

class Game {
private:
	char currentPlayer;

public:
	Game();
	Game(std::string name);
	Game(std::string name1, std::string name2);

	// void decideLetters();
};