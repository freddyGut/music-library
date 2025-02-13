//
// Created by Jonathan on 10/02/2025.
//

#include <algorithm>
#include <utility>

#include "Playlist.h"

void Playlist::addTrack(AudioTrack& newTrack) {
    list.push_back(newTrack);
}

void Playlist::removeTrack(std::string title) {
    AudioTrack toRemove(std::move(title),0,"");
    auto it = find<std::list<AudioTrack>::iterator, AudioTrack>(list.begin(), list.end(), toRemove);

    if (it != list.end())
        list.erase(it);
    else
        std::cout << "Track not found!" << std::endl;
}

void Playlist::playTrack(std::string title) {
    AudioTrack toPlay(std::move(title),0,"");
    auto it = find<std::list<AudioTrack>::iterator, AudioTrack>(list.begin(), list.end(), toPlay);

    if (it != list.end())
        (*it).play(); //it->play();
    else
        std::cout << "Track not found!"  << std::endl;
}

void Playlist::play() {

    for (auto it = list.begin(); it != list.end(); ++it)
        it->play();
}


