# Tic-Tac-Toe (C++ Console Game)

A simple two-player Tic-Tac-Toe game written in C++. Play locally in the terminal with a clean and modular design using OOP concepts.

## Features

- [x] **Player vs Player** mode
- [ ] **Player vs Computer** (in development)
- [ ] **Computer vs Computer** (in development)
- Clean board display
- Win/draw detection
- Turn-based input with player names
- Cross-platform (Windows/Linux/macOS)

## Concepts Used

- **Object-Oriented Programming (OOP)**: Encapsulated game logic into classes such as `Game`, `Board`, `Player`, `HumanPlayer`, and `ComputerPlayer`.
- **Inheritance and Polymorphism**: Used a base `Player` class with derived `HumanPlayer` and `ComputerPlayer` classes to support different types of players.
- **Smart Pointers (`std::unique_ptr`)**: Managed dynamic memory safely for polymorphic player objects without manual `new`/`delete`.
- **Input Validation**: Ensured users can't make illegal moves or enter invalid positions.
- **2D Arrays**: Represented the game board as a 3x3 character array for efficient indexing and display.
