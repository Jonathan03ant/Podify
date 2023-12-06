#include "Episode.h"

Episode::Episode(const string& podcastTitle, const string& host, const string& episodeTitle,  
                const string& category, const string& audio, const string& videoFile)
    : podcastTitle(podcastTitle), host(host), episodeTitle(episodeTitle), 
      category(category), audio(audio), videoFile(videoFile) {}

Episode::~Episode(){}

string Episode::getPodcastTitle() const{
    return podcastTitle;
}

string Episode::getEpisodeTitle() const{
    return episodeTitle;
}

string Episode::getHost() const{
    return host;
}

string Episode::getCategory() const{
    return category;
}

string Episode::getAudio() const{
    return audio;
}

string Episode::getVideoFile() const{
    return videoFile;
}

void Episode::print(ostream& os) const {
    os << "Podcast Title: " << podcastTitle << "\n"
       << "Host: " << host << "\n"
       << "Category: " << category << "\n"
       << "Episode Title: " << episodeTitle << "\n";
}

ostream& operator<<(ostream& os, const Episode& episode) {
    episode.print(os);
    return os;
}