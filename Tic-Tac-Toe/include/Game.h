#pragma once

#include <string>

class Player;

class Game {
private:
	std::string currentPlayer;

public:
	Game();
	Game(std::string name);
	Game(std::string name1, std::string name2);

	void decideLetters(Player& one, Player& two);
};