#include "../include/Player.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

Player::Player(std::string _name) {
	name = _name;
	score = 0;
	bool playerOne;

	srand(time(0));
	playerLetter = (rand() % 2) ? 'X' : 'O';
}

void Player::checkMemebers() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Score: " << score << std::endl;
	std::cout << "Is player one?: " << playerOne << std::endl;
}