#ifndef PODIFY_H
#define PODIFY_H

#include "Podcast.h"
#include "Array.h"
#include "Search.h"
#include <string>

class Podify{
    public:
        ~Podify();
        void addPodcast(Podcast* podcast);
        void addEpisode(Episode* episode, const string& podcastTitle);
        const Array<Podcast*>& getPodcasts() const;
        Podcast* getPodcast(int index);
        Podcast* getPodcast(const string& title);
        void getEpisodes(const Search& search, Array<Episode*>& episodes);



    private:
        Array<Podcast*> podcasts;
};

#endif