cmake_minimum_required(VERSION 3.29)
project(TerzoEsercizio_MusicLibrary)

set(CMAKE_CXX_STANDARD 20)

add_executable(TerzoEsercizio_MusicLibrary main.cpp
        AudioTrack.h
        Playlist.cpp
        Playlist.h
        AudioTrack.cpp
        MusicLibrary.cpp
        MusicLibrary.h)
