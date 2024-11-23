#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Class that represents the player in the game
class Player {
private:
    std::string name; // The player's name
    int score;        // The player's score

public:
    // Constructor that initializes the player's name and score
    Player(std::string name = "", int score = 0);

    // Methods to get and set the player's name
    std::string getName() const;
    void setName(std::string name);

    // Methods to get and set the player's score
    int getScore() const;
    void setScore(int score);

    // Method to update the score by adding points
    void updateScore(int points);
};

#endif
