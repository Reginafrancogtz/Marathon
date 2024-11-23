#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"

// Main class that controls the flow of the game
class Game {
private:
    Player player;              // The player of the game
    MusicQuestion musicQuestion; // A music-related question
    HistoryQuestion historyQuestion; // A history-related question

public:
    // Constructor that initializes the game with a player and questions
    Game(Player player, MusicQuestion musicQuestion, HistoryQuestion historyQuestion);

    // Method to start the game
    void startGame();

    // Method to display questions in general
    void displayQuestion();

    // Methods to play specific types of questions
    void playMusicQuestion();
    void playHistoryQuestion();

    // Method to set a new player
    void setPlayer(Player player);
};

#endif
