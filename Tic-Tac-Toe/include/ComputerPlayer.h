#pragma once

#include "Player.h"

class ComputerPlayer : public Player {
public:
	ComputerPlayer() : Player("Computer") {}

	ComputerPlayer(std::string name) : Player(name) {}
}; 