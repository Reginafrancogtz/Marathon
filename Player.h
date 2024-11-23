#ifndef PLAYER_H
#define PLAYER_H

#include <string>

// Clase que representa al jugador del juego
class Player {
private:
    std::string name; 
    int score;       

public:
    // Constructor que inicializa el nombre y la puntuación del jugador
    Player(std::string name = "", int score = 0);

    // Métodos para obtener y establecer el nombre del jugador
    std::string getName() const;
    void setName(std::string name);

    // Métodos para obtener y establecer la puntuación del jugador
    int getScore() const;
    void setScore(int score);

    // Método para actualizar la puntuación añadiendo puntos
    void updateScore(int points);
};

#endif
