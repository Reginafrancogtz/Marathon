#include "Game.h"
#include <iostream>

Game::Game(std::string playerName, int numQuestions)
    : player(playerName) {
    // Inicializar preguntas (ejemplo básico)
    questions.push_back(new MusicQuestion(
        "Who is known as the King of Pop?",
        "Music",
        {"Michael Jackson", "Prince", "Elvis Presley", "Madonna"},
        1, "Michael Jackson", "Thriller", "Pop"
    ));
    questions.push_back(new HistoryQuestion(
        "When did World War II end?",
        "History",
        {"1940", "1942", "1945", "1950"},
        3, "1940s", "End of WWII"
    ));

    // Solo para demostración: si hay más preguntas, podrías agregarlas dinámicamente.
    if (numQuestions > 2) {
        for (int i = 2; i < numQuestions; ++i) {
            questions.push_back(new Question(
                "Placeholder question?", "General",
                {"Option 1", "Option 2", "Option 3", "Option 4"}, 1
            ));
        }
    }
}

void Game::startGame() {
    std::cout << "Starting game for player: " << player.getName() << std::endl;

    for (size_t i = 0; i < questions.size(); ++i) {
        displayQuestion(i);

        std::cout << "Your answer: ";
        int answer;
        std::cin >> answer;

        if (questions[i]->checkAnswer(answer)) {
            std::cout << "Correct!" << std::endl;
            player.updateScore(10); // Incrementar puntaje.
        } else {
            std::cout << "Wrong! The correct answer was option " << questions[i]->getCorrectAnswer() << std::endl;
        }
    }

    std::cout << "Game Over! Your final score is: " << player.getScore() << std::endl;
}

void Game::displayQuestion(int index) const {
    if (index >= 0 && index < static_cast<int>(questions.size())) {
        questions[index]->displayQuestion();
    } else {
        std::cerr << "Invalid question index!" << std::endl;
    }
}

void Game::setPlayer(const Player& newPlayer) {
    player = newPlayer;
}

Question* Game::getQuestion(int index) const {
    if (index >= 0 && index < static_cast<int>(questions.size())) {
        return questions[index];
    }
    return nullptr;
}
