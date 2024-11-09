#include "Question.h"

Question::Question(const std::string &t, const std::vector<std::string> &opts, int correct)
    : text(t), options(opts), correctAnswer(correct) {}

void Question::displayQuestion() {}

bool Question::checkAnswer(int answer) { return false; }
