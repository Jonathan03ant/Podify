#include "PodcastPlayer.h"
#include <fstream>

void AudioPlayer::play(const Episode& m, ostream& ost) const{
    ost << m.getAudio();
}

void VideoPlayer::play(const Episode& m, ostream& ost) const{
    /*
        *First play the Audio
    */
    AudioPlayer::play(m, ost);

    /*
        *Now we can output the video files
    */
    string line;
    ifstream videoFile(m.getVideoFile());

    if (videoFile.is_open()){
        while (getline(videoFile, line)){
            ost << line << '\n';
        }
        videoFile.close();
    } else {
        ost << "Unable to open video file\n";
    }
}