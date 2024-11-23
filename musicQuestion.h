#ifndef MUSICQUESTION_H
#define MUSICQUESTION_H

#include "Question.h"

// Class that represents a music-related question
class MusicQuestion : public Question {
private:
    std::string artist; 
    std::string album;  
    std::string genre;  

public:
    // Constructor that initializes the specific attributes of MusicQuestion
    MusicQuestion(std::string text = "", std::string topic = "", std::vector<std::string> options = {}, int correctAnswer = -1,
                  std::string artist = "", std::string album = "", std::string genre = "");

    // Methods to get and set the artist
    std::string getArtist() const;
    void setArtist(std::string artist);

    // Methods to get and set the album
    std::string getAlbum() const;
    void setAlbum(std::string album);

    // Methods to get and set the music genre
    std::string getGenre() const;
    void setGenre(std::string genre);

    // Displays hints related to the question (artist, album, genre)
    void displayHints() const;

    // Overrides the method to display the question, including the hints
    void displayQuestion() const override;
};

#endif
