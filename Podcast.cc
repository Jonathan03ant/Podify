#include "Podcast.h"

Podcast::Podcast(const string& title, const string& host)
    :title(title), host(host) {}

bool Podcast::equals(const string& title) const{
    return this->title == title;
}

Episode* Podcast::get(int index) {
    return episodes[index];
}

void Podcast::print(ostream& os) const{
    os << "Title: "<< title << ", Host: " << host;
}

void Podcast::printWithEpisode(ostream& os) const{
    print(os);
    for (int i = 0; i <episodes.getSize(); i++){
        os << *episodes[i];
    }
}
int Podcast::getSize() const{
    return episodes.getSize();
}
void Podcast::add(Episode* episode){
    episodes += episode;
}

ostream& operator<<(ostream& os, const Podcast& podcast){
    podcast.print(os);
    return os;
}