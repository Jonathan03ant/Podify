#ifndef EPISODE_H
#define EPISODE_H
#include <stdio.h>
#include <string>
#include <ostream>

using namespace std;

class Episode {
    public:
        Episode(const string& podcastTitle, const string& episodeTitle, const string& host, 
                const string& category, const string& audio, const string& videoFile);
        ~Episode();

        string getPodcastTitle() const;
        string getEpisodeTitle() const;
        string getHost() const;
        string getCategory() const;
        string getAudio() const;
        string getVideoFile() const;

        void print(ostream&) const;

        friend ostream& operator<<(ostream& os, const Episode& episode);


    private:
        string podcastTitle;
        string episodeTitle;
        string host;
        string category;
        string audio;
        string videoFile;
};


#endif //EPISODE_H