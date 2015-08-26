#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie
{
    public:
    Movie(string _name);
    Movie(string _name, int _rating);
    void setName(string _name);
    void setRating(int _rating);
    int getRating();
    string getName();

    private:
    int rating;
    string name;
};

#endif
