#include "Player.h"

Player::Player(std::string playerName) : name(playerName), score(0) {}

std::string Player::getName() const {
    return name;
}

void Player::setName(std::string newName) {  
    name = newName;
}

int Player::getScore() const {
    return score;
}

void Player::setScore(int newScore) {
    score = newScore;
}

void Player::updateScore(int points) {
    score += points;
}
