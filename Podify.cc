#include "Podify.h"
#include <iostream>


Podify::~Podify() {
    for (int i = 0; i < podcasts.getSize(); i++) {
        delete podcasts[i];
    }
}

void Podify::addPodcast(Podcast* podcast) {
    podcasts += podcast;
}

void Podify::addEpisode(Episode* episode, const string& podcastTitle) {
    for (int i = 0; i < podcasts.getSize(); i++) {
        if (podcasts[i]->equals(podcastTitle)) {
            podcasts[i]->add(episode);
            return;
        }
    }
    std::cerr << "Error: Podcast not found\n";
}

const Array<Podcast*>& Podify::getPodcasts() const {
    return podcasts;
}

Podcast* Podify::getPodcast(int index) {
    if (index < 0 || index >= podcasts.getSize()) {
        std::cerr << "Error: Index out of bounds\n";
        exit(1);
    }
    return podcasts[index];
}

Podcast* Podify::getPodcast(const string& title) {
    for (int i = 0; i < podcasts.getSize(); i++) {
        if (podcasts[i]->equals(title)) {
            return podcasts[i];
        }
    }
    std::cerr << "Error: Podcast not found\n";
    exit(1);
}

void Podify::getEpisodes(const Search& search, Array<Episode*>& episodes) {
    for (int i = 0; i < podcasts.getSize(); i++) {
        for (int j = 0; j < podcasts[i]->getSize(); j++) {
            if (search.matches(podcasts[i]->get(j))) {
                episodes += podcasts[i]->get(j);
            }
        }
    }
}