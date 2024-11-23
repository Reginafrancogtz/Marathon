#include "Question.h"
#include <iostream>

// Constructor for the Question class
Question::Question(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer)
    : text(text), topic(topic), options(options), correctAnswer(correctAnswer) {}

// Returns the text of the question
std::string Question::getText() const {
    return text;
}

// Sets the text of the question
void Question::setText(std::string text) {
    this->text = text;
}

// Returns the topic of the question
std::string Question::getTopic() const {
    return topic;
}

// Sets the topic of the question
void Question::setTopic(std::string topic) {
    this->topic = topic;
}

// Returns the answer options
std::vector<std::string> Question::getOptions() const {
    return options;
}

// Sets the answer options
void Question::setOptions(std::vector<std::string> options) {
    this->options = options;
}

// Returns the index of the correct answer
int Question::getCorrectAnswer() const {
    return correctAnswer;
}

// Sets the index of the correct answer
void Question::setCorrectAnswer(int correctAnswer) {
    this->correctAnswer = correctAnswer;
}

// Checks if the provided index is correct
bool Question::checkAnswer(int answerIndex) const {
    return answerIndex == correctAnswer;
}

// Displays the question and its options
void Question::displayQuestion() const {
    std::cout << "Topic: " << topic << "\nQuestion: " << text << "\nOptions:\n";
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << "\n";
    }
}
