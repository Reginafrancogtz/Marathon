#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int score;

public:
    Player(std::string playerName);
    std::string getName() const;
    void setName(const std::string& newName);
    int getScore() const;
    void setScore(int newScore);
    void updateScore(int points);
};

#endif
