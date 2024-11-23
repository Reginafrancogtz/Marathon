#ifndef QUESTION_H
#define QUESTION_H

#include <string>
#include <vector>

// Clase base que representa una pregunta genérica
class Question {
protected:
    std::string text;                
    std::string topic;              
    std::vector<std::string> options; 
    int correctAnswer;             

public:
    // Constructor que inicializa la pregunta con sus atributos
    Question(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1);

    // Métodos para obtener y establecer el texto de la pregunta
    std::string getText() const;
    void setText(std::string text);

    // Métodos para obtener y establecer el tema de la pregunta
    std::string getTopic() const;
    void setTopic(std::string topic);

    // Métodos para obtener y establecer las opciones de respuesta
    std::vector<std::string> getOptions() const;
    void setOptions(std::vector<std::string> options);

    // Métodos para obtener y establecer la respuesta correcta
    int getCorrectAnswer() const;
    void setCorrectAnswer(int correctAnswer);

    // Verifica si el índice de respuesta dado por el jugador es correcto
    bool checkAnswer(int answerIndex) const;

    // Muestra la pregunta y las opciones en consola
    virtual void displayQuestion() const;
};

#endif
