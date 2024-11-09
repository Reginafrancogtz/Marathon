#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Question.h"
#include "Player.h"

class Game {
private:
    std::string gameName;
    std::vector<Question> questions;
    Player player;

public:
    Game(const std::string &gName, const std::string &pName);

    void addQuestion(const Question &q);
    void startGame();
    void displayLeaderboard();
};

#endif
