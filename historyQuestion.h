#ifndef HISTORYQUESTION_H
#define HISTORYQUESTION_H

#include "Question.h"

class HistoryQuestion : public Question {
private:
    std::string period;
    std::string event;

public:
    HistoryQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAns, 
                    std::string period, std::string event);

    void show() const;
    std::string displayHint() const;

    std::string getPeriod() const;
    void setPeriod(const std::string& newPeriod);

    std::string getEvent() const;
    void setEvent(const std::string& newEvent);
};

#endif
