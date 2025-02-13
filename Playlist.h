//
// Created by Jonathan on 10/02/2025.
//

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <list>
#include <utility>
#include "AudioTrack.h"


class Playlist {

public:
    explicit Playlist(std::string name) : name(std::move(name)) {}

    std::string getName() const {
        return name;
    }
    void addTrack(AudioTrack& newTrack);
    void removeTrack(std::string title);
    void playTrack(std::string title);
    void play();


private:
    std::list<AudioTrack> list;
    std::string name;

};



#endif //PLAYLIST_H
