//
// Created by Jonathan on 10/02/2025.
//

#ifndef AUDIOTRACK_H
#define AUDIOTRACK_H

#include <string>
#include <utility>
#include <iostream>

class AudioTrack {

public:
    AudioTrack(std::string title, int length, std::string imageFileName) :
    title(std::move(title)), length(length), imageFileName(std::move(imageFileName)) {}
    bool operator==(const AudioTrack& other) const;

    void play() {
        std::cout << "Playing the song " << title << std::endl;
    }

private:
    std::string title;
    int length;
    std::string imageFileName;
    //not an actual change, but seen as such
};

#endif //AUDIOTRACK_H
