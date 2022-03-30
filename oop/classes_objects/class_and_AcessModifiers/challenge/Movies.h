#ifndef _MOVIES_H
#define _MOVIES_H

#include "Movie.h"
#include <vector>
#include <string>
#include <iostream> 

class Movies
{
    private:
        std::vector<Movie> mv_collection;
    public:
        void addMovie(std::string name, Rating rate, int watched);
        void incWatch(std::string name);
        void displayMovies();
    Movies(/* args */);
    ~Movies();
    Movies(std::vector<Movie> mv);
};

#endif