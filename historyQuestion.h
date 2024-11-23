#ifndef HISTORYQUESTION_H
#define HISTORYQUESTION_H

#include "Question.h"

// Clase que representa una pregunta sobre historia
class HistoryQuestion : public Question {
private:
    std::string period; 
    std::string event; 

public:
    // Constructor que inicializa los atributos específicos de HistoryQuestion
    HistoryQuestion(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1,
                    std::string period = "", std::string event = "");

    // Métodos para obtener y establecer el período histórico
    std::string getPeriod() const;
    void setPeriod(std::string period);

    // Métodos para obtener y establecer el evento histórico
    std::string getEvent() const;
    void setEvent(std::string event);

    // Sobrescribe el método para mostrar la pregunta, incluyendo detalles históricos
    void displayQuestion() const override;
};

#endif
