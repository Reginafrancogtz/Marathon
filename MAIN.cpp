#include <iostream>
#include "Game.h"
#include "Player.h"
#include "MusicQuestion.h"
#include "HistoryQuestion.h"

using namespace std;

int main() {
    // Configuración inicial del jugador
    string playerName;
    cout << "Welcome to the Marathon Game!" << endl;
    cout << "Enter your name: ";
    cin >> playerName;

    // Crear el jugador
    Player player(playerName, 0);

    // Crear las preguntas de música
    vector<string> musicOptions = {"Pop", "Rock", "Jazz", "Classical"};
    MusicQuestion musicQuestion(
        "What genre does the band Queen belong to?",
        "Music",
        musicOptions,
        1, // Respuesta correcta: Rock
        "Queen",
        "A Night at the Opera",
        "Rock"
    );

    // Crear las preguntas de historia
    vector<string> historyOptions = {"1914", "1939", "1945", "1961"};
    HistoryQuestion historyQuestion(
        "When did World War II start?",
        "History",
        historyOptions,
        1, // Respuesta correcta: 1939
        "1939-1945",
        "Start of WWII"
    );

    // Crear el juego
    Game game(player, musicQuestion, historyQuestion);

    // Iniciar el juego
    game.startGame();

    // Mostrar y jugar la pregunta de música
    cout << "\nMusic Question:" << endl;
    musicQuestion.displayQuestion();
    int answer;
    cout << "Enter the number of your answer: ";
    cin >> answer;

    // Verificar respuesta de música
    if (musicQuestion.checkAnswer(answer - 1)) { // -1 porque el índice en las opciones comienza en 0
        cout << "Correct!" << endl;
        player.updateScore(10); // Incrementar la puntuación en 10 puntos
    } else {
        cout << "Wrong! The correct answer was: " << musicOptions[musicQuestion.getCorrectAnswer()] << endl;
    }

    // Mostrar y jugar la pregunta de historia
    cout << "\nHistory Question:" << endl;
    historyQuestion.displayQuestion();
    cout << "Enter the number of your answer: ";
    cin >> answer;

    // Verificar respuesta de historia
    if (historyQuestion.checkAnswer(answer - 1)) {
        cout << "Correct!" << endl;
        player.updateScore(10); // Incrementar la puntuación en 10 puntos
    } else {
        cout << "Wrong! The correct answer was: " << historyOptions[historyQuestion.getCorrectAnswer()] << endl;
    }

    // Mostrar la puntuación final
    cout << "\nGame Over! Your final score is: " << player.getScore() << " points." << endl;

    return 0;
}
