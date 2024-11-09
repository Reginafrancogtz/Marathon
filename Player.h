#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int score;

public:
    Player(const std::string &n);

    std::string getName();
    void updateScore(int points);
    int getScore() const;
};

#endif
