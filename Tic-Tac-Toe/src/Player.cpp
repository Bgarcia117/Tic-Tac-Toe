#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../include/Player.h"

void Player::displayMembers() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Score: " << score << std::endl;
	std::cout << "Letter: " << playerLetter << std::endl;
}