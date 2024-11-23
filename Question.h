#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

// Base class that represents a generic question
class Question {
protected:
    std::string text;                // The text of the question
    std::string topic;               // The topic of the question
    std::vector<std::string> options; // The answer options for the question
    int correctAnswer;               // The index of the correct answer

public:
    // Constructor that initializes the question with its attributes
    Question(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1);

    // Methods to get and set the question text
    std::string getText() const;
    void setText(std::string text);

    // Methods to get and set the question topic
    std::string getTopic() const;
    void setTopic(std::string topic);

    // Methods to get and set the answer options
    std::vector<std::string> getOptions() const;
    void setOptions(std::vector<std::string> options);

    // Methods to get and set the correct answer
    int getCorrectAnswer() const;
    void setCorrectAnswer(int correctAnswer);

    // Checks if the answer index given by the player is correct
    bool checkAnswer(int answerIndex) const;

    // Displays the question and its options in the console
    virtual void displayQuestion() const;
};

#endif

