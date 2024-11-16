#include "Question.h"
#include <iostream>

Question::Question(std::string qText, std::string qTopic, std::vector<std::string> qOptions, int correctAns)
    : text(qText), topic(qTopic), options(qOptions), correctAnswer(correctAns) {}

void Question::displayQuestion() const {
    std::cout << "Question: " << text << std::endl;
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << std::endl;
    }
}

bool Question::checkAnswer(int answer) const {
    return answer == correctAnswer;
}

std::string Question::getText() const {
    return text;
}

void Question::setText(const std::string& newText) {
    text = newText;
}

std::string Question::getTopic() const {
    return topic;
}

void Question::setTopic(const std::string& newTopic) {
    topic = newTopic;
}

std::vector<std::string> Question::getOptions() const {
    return options;
}

void Question::setOptions(const std::vector<std::string>& newOptions) {
    options = newOptions;
}

int Question::getCorrectAnswer() const {
    return correctAnswer;
}

void Question::setCorrectAnswer(int newCorrectAnswer) {
    correctAnswer = newCorrectAnswer;
}
