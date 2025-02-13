//
// Created by Jonathan on 10/02/2025.
//

#include "AudioTrack.h"

bool AudioTrack::operator==(const AudioTrack &other) const {
    return this->title == other.title;
}
