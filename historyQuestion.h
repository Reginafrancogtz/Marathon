#ifndef HISTORYQUESTION_H
#define HISTORYQUESTION_H

#include "Question.h"

// Class that represents a history-related question
class HistoryQuestion : public Question {
private:
    std::string period; 
    std::string event; 

public:
    // Constructor that initializes the specific attributes of HistoryQuestion
    HistoryQuestion(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1,
                    std::string period = "", std::string event = "");

    // Methods to get and set the historical period
    std::string getPeriod() const;
    void setPeriod(std::string period);

    // Methods to get and set the historical event
    std::string getEvent() const;
    void setEvent(std::string event);

    // Overrides the method to display the question, including historical details
    void displayQuestion() const override;
};

#endif
