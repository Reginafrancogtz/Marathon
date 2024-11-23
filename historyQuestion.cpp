#include "HistoryQuestion.h"
#include <iostream>

// Constructor de la clase HistoryQuestion
HistoryQuestion::HistoryQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer,
                                 std::string period, std::string event)
    : Question(text, topic, options, correctAnswer), period(period), event(event) {}

// Retorna el período histórico relacionado con la pregunta
std::string HistoryQuestion::getPeriod() const {
    return period;
}

// Establece el período histórico relacionado con la pregunta
void HistoryQuestion::setPeriod(std::string period) {
    this->period = period;
}

// Retorna el evento histórico relacionado con la pregunta
std::string HistoryQuestion::getEvent() const {
    return event;
}

// Establece el evento histórico relacionado con la pregunta
void HistoryQuestion::setEvent(std::string event) {
    this->event = event;
}

// Sobrescribe el método displayQuestion para incluir detalles históricos
void HistoryQuestion::displayQuestion() const {
    Question::displayQuestion();
    std::cout << "Historical Context: Period - " << period << ", Event - " << event << "\n";
}
