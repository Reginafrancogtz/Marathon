#include "Player.h"

// Constructor for the Player class
Player::Player(std::string name, int score) : name(name), score(score) {}

// Returns the player's name
std::string Player::getName() const {
    return name;
}

// Sets the player's name
void Player::setName(std::string name) {
    this->name = name;
}

// Returns the player's score
int Player::getScore() const {
    return score;
}

// Sets the player's score
void Player::setScore(int score) {
    this->score = score;
}

// Increases the player's score by the specified amount
void Player::updateScore(int points) {
    score += points;
}
