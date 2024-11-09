#ifndef ANSWER_H
#define ANSWER_H

#include <string>

class Answer {
private:
    std::string text;
    bool isCorrect;

public:
    Answer(const std::string &t, bool correct);

    std::string getText();       // Devuelve el texto de la respuesta
    bool isCorrectAnswer();      // Devuelve si la respuesta es correcta
};

#endif

