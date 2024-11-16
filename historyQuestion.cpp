#include "HistoryQuestion.h"
#include <iostream>

HistoryQuestion::HistoryQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAns, 
                                 std::string period, std::string event)
    : Question(text, topic, options, correctAns), period(period), event(event) {}

void HistoryQuestion::show() const {
    displayQuestion();
    std::cout << "Period: " << period << ", Event: " << event << std::endl;
}

std::string HistoryQuestion::displayHint() const {
    return "Hint: Consider the historical significance of this period.";
}

std::string HistoryQuestion::getPeriod() const {
    return period;
}

void HistoryQuestion::setPeriod(std::string newPeriod) {  
    period = newPeriod;
}

std::string HistoryQuestion::getEvent() const {
    return event;
}

void HistoryQuestion::setEvent(std::string newEvent) {  
    event = newEvent;
}
