#ifndef PODCAST_PLAYER_H
#define PODCAST_PLAYER_H
#include "Episode.h"
#include <ostream>
#include <string>

using namespace std;

/*
    *Abstract class
*/
class PodcastPlayer {
    public:
        virtual void play(const Episode& m, ostream& ost) const = 0;
};

/*
    *The two classes below are concrete classes
*/
class AudioPlayer : public PodcastPlayer {
    public:
        virtual void play(const Episode& m, ostream& ost) const override;
};

class VideoPlayer : public AudioPlayer {
    public:
        virtual void play(const Episode& m, ostream& ost) const override;
};


#endif