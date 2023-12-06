#ifndef PODCAST_H
#define PODCAST_H

#include "Episode.h"
#include "Array.h"
#include <string>
#include <stdio.h>
#include <ostream>

using namespace std;

class Podcast {
    public:
        Podcast(const string& title, const string& host);


        bool equals(const string& title) const;
        Episode* get(int index);
        int getSize() const;
        void print(ostream& os) const;
        void printWithEpisode(ostream& os) const;
        void add(Episode* episode);

        friend ostream& operator<<(ostream& os, const Podcast& podcast);

    private:
        string title;
        string host;
        Array<Episode*> episodes;
}

#endif