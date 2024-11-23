#include "Player.h"

// Constructor de la clase Player
Player::Player(std::string name, int score) : name(name), score(score) {}

// Retorna el nombre del jugador
std::string Player::getName() const {
    return name;
}

// Establece el nombre del jugador
void Player::setName(std::string name) {
    this->name = name;
}

// Retorna la puntuación del jugador
int Player::getScore() const {
    return score;
}

// Establece la puntuación del jugador
void Player::setScore(int score) {
    this->score = score;
}

// Incrementa la puntuación del jugador en la cantidad indicada
void Player::updateScore(int points) {
    score += points;
}
