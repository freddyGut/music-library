//
// Created by Jonathan on 10/02/2025.
//

#ifndef MUSICLIBRARY_H
#define MUSICLIBRARY_H
#include <map>
#include <bits/utility.h>

#include "Playlist.h"


class MusicLibrary {

public:
    MusicLibrary() {}

    void addPlaylist(Playlist& p);
    bool findPlaylist(std::string playlistName);
    void listenPlaylist(std::string playlistName);

private:
    std::map<std::string, Playlist> library;
};



#endif //MUSICLIBRARY_H
