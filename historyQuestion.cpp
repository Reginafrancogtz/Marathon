#include "HistoryQuestion.h"
#include <iostream>

// Constructor for the HistoryQuestion class
HistoryQuestion::HistoryQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer,
                                 std::string period, std::string event)
    : Question(text, topic, options, correctAnswer), period(period), event(event) {}

// Returns the historical period related to the question
std::string HistoryQuestion::getPeriod() const {
    return period;
}

// Sets the historical period related to the question
void HistoryQuestion::setPeriod(std::string period) {
    this->period = period;
}

// Returns the historical event related to the question
std::string HistoryQuestion::getEvent() const {
    return event;
}

// Sets the historical event related to the question
void HistoryQuestion::setEvent(std::string event) {
    this->event = event;
}

// Overrides the displayQuestion method to include historical details
void HistoryQuestion::displayQuestion() const {
    Question::displayQuestion();
    std::cout << "Historical Context: Period - " << period << ", Event - " << event << "\n";
}
