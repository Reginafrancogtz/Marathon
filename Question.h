#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

class Question {
protected:
    std::string text;
    std::string topic;
    std::vector<std::string> options;
    int correctAnswer;

public:
    Question(std::string qText, std::string qTopic, std::vector<std::string> qOptions, int correctAns);
    virtual void displayQuestion() const;
    virtual bool checkAnswer(int answer) const;

    std::string getText() const;
    void setText(const std::string& newText);

    std::string getTopic() const;
    void setTopic(const std::string& newTopic);

    std::vector<std::string> getOptions() const;
    void setOptions(const std::vector<std::string>& newOptions);

    int getCorrectAnswer() const;
    void setCorrectAnswer(int newCorrectAnswer);
};

#endif
