#include "Game.h"
#include <iostream>

// Constructor for the Game class
Game::Game(Player player, MusicQuestion musicQuestion, HistoryQuestion historyQuestion)
    : player(player), musicQuestion(musicQuestion), historyQuestion(historyQuestion) {}

// Starts the game by displaying a welcome message
void Game::startGame() {
    std::cout << "Welcome, " << player.getName() << "!\nLet's begin the Marathon Game!\n";
}

// Displays the questions to the player
void Game::displayQuestion() {
    std::cout << "Here are your questions:\n";
    musicQuestion.displayQuestion();
    historyQuestion.displayQuestion();
}

// Logic for answering music-related questions
void Game::playMusicQuestion() {
    musicQuestion.displayQuestion();
    // Logic for capturing and verifying the answer would go here
}

// Logic for answering history-related questions
void Game::playHistoryQuestion() {
    historyQuestion.displayQuestion();
    // Logic for capturing and verifying the answer would go here
}

// Sets a new player in the game
void Game::setPlayer(Player player) {
    this->player = player;
}
