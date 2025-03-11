#pragma once
#include <iostream>
#include <string>
#include "Player.h"

class HumanPlayer : public Player {
public:
	// Default constructor
	HumanPlayer() : Player("Human") {}

	// Paramatarized constructor
	HumanPlayer(std::string name) : Player(name) {}
};