#include "MusicQuestion.h"
#include <iostream>

// Constructor for the MusicQuestion class
MusicQuestion::MusicQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAnswer,
                             std::string artist, std::string album, std::string genre)
    : Question(text, topic, options, correctAnswer), artist(artist), album(album), genre(genre) {}

// Returns the artist related to the question
std::string MusicQuestion::getArtist() const {
    return artist;
}

// Sets the artist related to the question
void MusicQuestion::setArtist(std::string artist) {
    this->artist = artist;
}

// Returns the album related to the question
std::string MusicQuestion::getAlbum() const {
    return album;
}

// Sets the album related to the question
void MusicQuestion::setAlbum(std::string album) {
    this->album = album;
}

// Returns the music genre related to the question
std::string MusicQuestion::getGenre() const {
    return genre;
}

// Sets the music genre related to the question
void MusicQuestion::setGenre(std::string genre) {
    this->genre = genre;
}

// Displays hints related to the question
void MusicQuestion::displayHints() const {
    std::cout << "Hints: Artist - " << artist << ", Album - " << album << ", Genre - " << genre << "\n";
}

// Overrides the displayQuestion method to include hints
void MusicQuestion::displayQuestion() const {
    Question::displayQuestion();
    displayHints();
}

