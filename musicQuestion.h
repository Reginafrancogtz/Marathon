#ifndef MUSICQUESTION_H
#define MUSICQUESTION_H

#include "Question.h"

// Clase que representa una pregunta sobre música
class MusicQuestion : public Question {
private:
    std::string artist; 
    std::string album;  
    std::string genre;  

public:
    // Constructor que inicializa los atributos específicos de MusicQuestion
    MusicQuestion(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1,
                  std::string artist = "", std::string album = "", std::string genre = "");

    // Métodos para obtener y establecer el artista
    std::string getArtist() const;
    void setArtist(std::string artist);

    // Métodos para obtener y establecer el álbum
    std::string getAlbum() const;
    void setAlbum(std::string album);

    // Métodos para obtener y establecer el género musical
    std::string getGenre() const;
    void setGenre(std::string genre);

    // Muestra pistas relacionadas con la pregunta (artista, álbum, género)
    void displayHints() const;

    // Sobrescribe el método para mostrar la pregunta, incluyendo las pistas
    void displayQuestion() const override;
};

#endif
