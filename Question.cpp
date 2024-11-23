#include "Question.h"
#include <iostream>

// Constructor de la clase Question
Question::Question(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer)
    : text(text), topic(topic), options(options), correctAnswer(correctAnswer) {}

// Retorna el texto de la pregunta
std::string Question::getText() const {
    return text;
}

// Establece el texto de la pregunta
void Question::setText(std::string text) {
    this->text = text;
}

// Retorna el tema de la pregunta
std::string Question::getTopic() const {
    return topic;
}

// Establece el tema de la pregunta
void Question::setTopic(std::string topic) {
    this->topic = topic;
}

// Retorna las opciones de respuesta
std::vector<std::string> Question::getOptions() const {
    return options;
}

// Establece las opciones de respuesta
void Question::setOptions(std::vector<std::string> options) {
    this->options = options;
}

// Retorna el índice de la respuesta correcta
int Question::getCorrectAnswer() const {
    return correctAnswer;
}

// Establece el índice de la respuesta correcta
void Question::setCorrectAnswer(int correctAnswer) {
    this->correctAnswer = correctAnswer;
}

// Verifica si el índice proporcionado es correcto
bool Question::checkAnswer(int answerIndex) const {
    return answerIndex == correctAnswer;
}

// Muestra la pregunta y sus opciones
void Question::displayQuestion() const {
    std::cout << "Topic: " << topic << "\nQuestion: " << text << "\nOptions:\n";
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << "\n";
    }
}

