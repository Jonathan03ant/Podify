#include "Search.h"

ostream& operator<<(ostream& ost, const Search& search) {
    search.print(ost);
    return ost;
}

/*
    *H_Search class implementations
*/
H_Search::H_Search(const string& host) : host(host) {};

bool H_Search::matches(const Episode* episode) const {
    return episode->getHost() == host;
}

void H_Search::print(ostream& ost) const {
    ost << "Matches an Episode with host: " << host << endl;
}

/*
    *C_Search class implementations
*/

C_Search::C_Search(const string& category) : category(category) {};

bool C_Search::matches(const Episode* episode) const {
    return episode->getCategory() == category;
}

void C_Search::print(ostream& ost) const{
    ost << "Matches an Episode with Category: " << category << endl;
}

/*
    *HorC Class Implementation
*/

HorC_Search::HorC_Search(const string& host, const string& category)
    : H_Search(host), C_Search(category) {};

bool HorC_Search::matches(const Episode* episode) const {
    return H_Search::matches(episode) || C_Search::matches(episode);
}

void HorC_Search::print(ostream& ost) const {
    ost << "------Matches an Episode with------ ";
    H_Search::print(ost);
    ost << " or ";
    C_Search::print(ost);
    ost << endl;
}
