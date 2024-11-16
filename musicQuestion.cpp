#include "MusicQuestion.h"
#include <iostream>

MusicQuestion::MusicQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAns, 
                             std::string artist, std::string album, std::string genre)
    : Question(text, topic, options, correctAns), artist(artist), album(album), genre(genre) {}

void MusicQuestion::show() const {
    displayQuestion();
    std::cout << "Artist: " << artist << ", Album: " << album << ", Genre: " << genre << std::endl;
}

std::string MusicQuestion::displayHints() const {
    return "Hint: Think about the artist's popular album!";
}

std::string MusicQuestion::getArtist() const {
    return artist;
}

void MusicQuestion::setArtist(const std::string& newArtist) {
    artist = newArtist;
}

std::string MusicQuestion::getAlbum() const {
    return album;
}

void MusicQuestion::setAlbum(const std::string& newAlbum) {
    album = newAlbum;
}

std::string MusicQuestion::getGenre() const {
    return genre;
}

void MusicQuestion::setGenre(const std::string& newGenre) {
    genre = newGenre;
}
