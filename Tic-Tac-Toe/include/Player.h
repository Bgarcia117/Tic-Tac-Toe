#pragma once
#include <string>

class Player {
private:
	std::string name;
	int score;
	char playerLetter;
	bool playerOne;

public:
	Player() : name("NONE"), score(0), playerLetter(' '), playerOne(false) {}
	Player(std::string name);

	// void placeLetter();
	void checkMemebers();

};
