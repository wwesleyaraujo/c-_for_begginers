#ifndef _MOVIES_H
#define _MOVIES_H
#include "Movie.h"
#include <vector>

class Movies{
 
    
    private:
    std::vector<Movie> movies ;

    public:
       Movies();
        std::string listMovies();
        void addMovie(Movie movei);
};
#endif