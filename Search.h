#ifndef SEARCH_H
#define SEARCH_H

#include <string>
#include <ostream>
#include "Episode.h"

/*
    *Abstract class
*/
class Search {
    public:
        virtual bool matches(const Episode* const) const =0;
        virtual void print(ostream& ost) const = 0;
        friend ostream& operator<<(ostream& ost, const Search& search);
};

/*
    *H stands for HOST
    *Needs to be decleared as Virtual
*/
class H_Search : public virtual Search{
    public:
        H_Search(const string& host);
        virtual bool matches (const Episode*) const override;
        virtual void print(ostream& ost) const override;
    private:
        string host;
};

/*
    *C stands for CATEGORY
    *Needs to be decleared as Virtual
*/
class C_Search : public virtual Search{
    public:
        C_Search(const string& category);
        virtual bool matches (const Episode*) const override;
        virtual void print(ostream& ost) const override;
    private:
        string category;
};


/*
    *Typical Diamond Problem
    *We need virtual
*/
class HorC_Search : public H_Search, public C_Search{
    public: 
        HorC_Search(const string& host, const string& category);
        virtual bool matches(const Episode* episode) const override;
        virtual void print(ostream& ost) const override;
};

#endif