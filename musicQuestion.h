#ifndef MUSICQUESTION_H
#define MUSICQUESTION_H

#include "Question.h"

class MusicQuestion : public Question {
private:
    std::string artist;
    std::string album;
    std::string genre;

public:
    MusicQuestion(std::string text, std::string topic, std::vector<std::string> options, int correctAns, 
                  std::string artist, std::string album, std::string genre);

    void show() const;
    std::string displayHints() const;

    std::string getArtist() const;
    void setArtist(const std::string& newArtist);

    std::string getAlbum() const;
    void setAlbum(const std::string& newAlbum);

    std::string getGenre() const;
    void setGenre(const std::string& newGenre);
};

#endif

