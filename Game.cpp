#include "Game.h"
#include <iostream>

// Constructor de la clase Game
Game::Game(Player player, MusicQuestion musicQuestion, HistoryQuestion historyQuestion)
    : player(player), musicQuestion(musicQuestion), historyQuestion(historyQuestion) {}

// Inicia el juego mostrando un mensaje de bienvenida
void Game::startGame() {
    std::cout << "Welcome, " << player.getName() << "!\nLet's begin the Marathon Game!\n";
    
}

// Muestra las preguntas al jugador
void Game::displayQuestion() {
    std::cout << "Here are your questions:\n";
    musicQuestion.displayQuestion();
    historyQuestion.displayQuestion();
}

// Lógica para responder preguntas de música
void Game::playMusicQuestion() {
    musicQuestion.displayQuestion();
    // Aquí iría la lógica para capturar y verificar la respuesta
}

// Lógica para responder preguntas de historia
void Game::playHistoryQuestion() {
    historyQuestion.displayQuestion();
    // Aquí iría la lógica para capturar y verificar la respuesta
}

// Establece un nuevo jugador en el juego
void Game::setPlayer(Player player) {
    this->player = player;
}
