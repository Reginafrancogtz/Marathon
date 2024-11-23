#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"

// Clase principal que controla el flujo del juego
class Game {
private:
    Player player;             
    MusicQuestion musicQuestion; 
    HistoryQuestion historyQuestion; 

public:
    // Constructor que inicializa el juego con un jugador y preguntas
    Game(Player player, MusicQuestion musicQuestion, HistoryQuestion historyQuestion);

    // Método para iniciar el juego
    void startGame();

    // Método para mostrar preguntas en general
    void displayQuestion();

    // Métodos para jugar preguntas específicas
    void playMusicQuestion();
    void playHistoryQuestion();

    // Método para establecer un nuevo jugador
    void setPlayer(Player player);
};

#endif
