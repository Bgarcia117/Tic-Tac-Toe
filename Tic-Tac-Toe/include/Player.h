#pragma once
#include <string>

class Player {
protected:
	std::string name;
	int score;
	char playerLetter;
	bool playerOne;

public:
	Player() : name("NONE"), score(0), playerLetter(' '), playerOne(false) {}

	Player(std::string _name) : name(_name), score(0), playerLetter(' '),
		                        playerOne(false) {}

	// void placeLetter();
	void displayMembers();

};
