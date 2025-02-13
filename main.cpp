#include <iostream>

#include "AudioTrack.h"
#include "MusicLibrary.h"
#include "Playlist.h"

int main() {

    AudioTrack song1("Ghosts", 240, "bloodOnTheDanceFloor.jpeg");
    AudioTrack song2("Black or White", 300, "dangerous.jpeg");
    AudioTrack song3("Billie Jean", 250, "thriller.jpeg");
    AudioTrack song4("Smooth criminal", 270, "bad.jpeg");
    AudioTrack song5("The girl is mine", 500, "offTheWall.jpeg");


    //creating the playlist
    Playlist kingOfPop("MJ King of Pop");
    kingOfPop.addTrack(song1);
    kingOfPop.addTrack(song2);
    kingOfPop.addTrack(song3);
    kingOfPop.addTrack(song4);
    kingOfPop.addTrack(song5);
    //let's listen to the playlist!
    kingOfPop.play();

    //listening to one specific audio track
    std::cout << "\nListening to a specific audio track: ";
    kingOfPop.playTrack("Ghosts");

    //removing one audio track
    std::cout << "\nRemoving Black or White..." << std::endl;
    kingOfPop.removeTrack("Black or White");
    kingOfPop.play();

    //adding one audio track
    std::cout << "\nAdding Black or White..." << std::endl;
    kingOfPop.addTrack(song2);
    kingOfPop.play();



    std::cout << "\n\n\nCreating the library" << std::endl;
    //creating a new playlist
    Playlist bestOfMJ("Best of MJ");
    bestOfMJ.addTrack(song1);
    bestOfMJ.addTrack(song4);

    //creating the music library
    MusicLibrary myLibrary;
    myLibrary.addPlaylist(kingOfPop);
    myLibrary.addPlaylist(bestOfMJ);

    myLibrary.listenPlaylist("MJ King of Pop");
    myLibrary.listenPlaylist("80's funk!");


    //creating new audio tracks
    AudioTrack song6 ("Blame it on the boogie", 400, "victory.png");
    AudioTrack song7 ("Do you know where your children are", 380, "xscape.jpg");
    AudioTrack song8 ("El taxi", 200, "micorazon.png");
    Playlist makeMeDance("Make me dance");
    makeMeDance.addTrack(song6);
    makeMeDance.addTrack(song7);
    makeMeDance.addTrack(song8);

    myLibrary.addPlaylist(makeMeDance);
    myLibrary.listenPlaylist("Make me dance");



    return 0;
}
