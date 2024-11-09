#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

class Question {
private:
    std::string text;
    std::vector<std::string> options;
    int correctAnswer;

public:
    Question(const std::string &t, const std::vector<std::string> &opts, int correct);

    void displayQuestion();
    bool checkAnswer(int answer);
};

#endif
