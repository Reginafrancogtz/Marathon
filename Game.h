#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "Player.h"
#include "Question.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"

class Game {
private:
    Player player;
    std::vector<Question*> questions; 

public:
    Game(std::string playerName, int numQuestions);

    void startGame();
    void displayQuestion(int index) const;

    void setPlayer(const Player& newPlayer);
    Question* getQuestion(int index) const;
};

#endif
