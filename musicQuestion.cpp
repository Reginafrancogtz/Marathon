#include "MusicQuestion.h"
#include <iostream>

// Constructor de la clase MusicQuestion
MusicQuestion::MusicQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer,
                             std::string artist, std::string album, std::string genre)
    : Question(text, topic, options, correctAnswer), artist(artist), album(album), genre(genre) {}

// Retorna el artista relacionado con la pregunta
std::string MusicQuestion::getArtist() const {
    return artist;
}

// Establece el artista relacionado con la pregunta
void MusicQuestion::setArtist(std::string artist) {
    this->artist = artist;
}

// Retorna el álbum relacionado con la pregunta
std::string MusicQuestion::getAlbum() const {
    return album;
}

// Establece el álbum relacionado con la pregunta
void MusicQuestion::setAlbum(std::string album) {
    this->album = album;
}

// Retorna el género musical relacionado con la pregunta
std::string MusicQuestion::getGenre() const {
    return genre;
}

// Establece el género musical relacionado con la pregunta
void MusicQuestion::setGenre(std::string genre) {
    this->genre = genre;
}

// Muestra pistas relacionadas con la pregunta
void MusicQuestion::displayHints() const {
    std::cout << "Hints: Artist - " << artist << ", Album - " << album << ", Genre - " << genre << "\n";
}

// Sobrescribe el método displayQuestion para incluir pistas
void MusicQuestion::displayQuestion() const {
    Question::displayQuestion();
    displayHints();
}
