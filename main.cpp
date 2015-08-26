#include <iostream>
#include "Movie.h"

int main(int argc, char* argv[])
{
    Movie m1 = Movie("Interstellar", 9);

    cout << m1.getName() << ": " << m1.getRating() << endl;
    return(0);
}
