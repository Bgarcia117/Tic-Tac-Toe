#pragma once
#include <string>

class Player {
protected:
	std::string name;
	int score;
	char playerLetter;

public:
	Player() : name("NONE"), score(0), playerLetter(' ') {}

	Player(std::string _name) : name(_name), score(0), playerLetter(' ') {}

	void displayMembers();
	char getLetter() { return playerLetter; }
	std::string getName() { return name; }
	void setLetter(char letter) { playerLetter = letter; }

};
