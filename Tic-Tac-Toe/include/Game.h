#pragma once

#include <string>
#include <memory>
#include "Board.h"
#include "Player.h"

class Player;

class Game {
private:
	Board board;
	std::unique_ptr<Player> playerOne;
	std::unique_ptr<Player> playerTwo;
	char currentPlayer;
	std::string currentPlayerName;

public:
	Game();
	Game(std::string name);
	Game(std::string name1, std::string name2);

	void decideLetters(Player& one, Player& two);
	void run();
	void clearScreen() { std::cout << std::string(100, '\n'); }
};