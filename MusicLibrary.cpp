//
// Created by Jonathan on 10/02/2025.
//

#include "MusicLibrary.h"

void MusicLibrary::addPlaylist(Playlist &p) {
    library.insert({p.getName(), p});
}

bool MusicLibrary::findPlaylist(std::string playlistName) {
    return library.find(playlistName) != library.end();
}

void MusicLibrary::listenPlaylist(std::string playlistName) {

    if (findPlaylist(playlistName))
        library.find(playlistName)->second.play();
    else
        std::cout << "Playlist " << playlistName << " does not exist" << std::endl;




}


