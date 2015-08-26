#include "Movie.h"
using namespace std;

// Default constructor
Movie::Movie(string _name)
{
    this->name = _name;
    this->rating = 0;
}

Movie::Movie(string _name, int _rating)
{
    this->name = _name;
    this->rating = _rating;
}

void Movie::setName(string _name)
{
    this->name = _name;
}

void Movie::setRating(int _rating)
{
    this->rating = _rating;
}

string Movie::getName()
{
    return(this->name);
}

int Movie::getRating()
{
    return(this->rating);
}
