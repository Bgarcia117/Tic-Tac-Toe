#include <iostream>
#include "../include/Game.h"
#include "../include/Board.h"
#include "../include/Player.h"

Game::Game() {
	Board newBoard;
	std::cout << "Testing objs and its functions: " << std::endl;
	std::cout << "Board has been created" << std::endl;
	newBoard.displayBoard();
	std::cout << "Is the board full?: " << newBoard.isFull() << std::endl;

	Player comp1;
	Player comp2;

	comp1.displayMemebers();
	comp2.displayMemebers();


}

Game::Game(std::string name) {
	Board newBoard;
	std::cout << "Testing objs and its functions: " << std::endl;
	std::cout << "Board has been created" << std::endl;
	newBoard.displayBoard();
	std::cout << "Is the board full?: " << newBoard.isFull() << std::endl;

	Player human(name);
	Player comp("Computer");

	human.displayMemebers();
	comp.displayMemebers();
}




Game::Game(std::string name1, std::string name2) {
	Board newBoard;
	std::cout << "Testing objs and its functions: " << std::endl;
	std::cout << "Board has been created" << std::endl;
	newBoard.displayBoard();
	std::cout << "Is the board full?: " << newBoard.isFull() << std::endl;

	Player human1(name1);
	Player human2(name2);

	human1.displayMemebers();
	human2.displayMemebers();

}