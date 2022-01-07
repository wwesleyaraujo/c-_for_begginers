#include "Movies.h"

Movies::Movies(){
   
}

std::string Movies::listMovies(){
    std::string ret;
    for(auto i : this->movies){
        ret = ret+ i.getName();
    }
    return ret;
}

void Movies::addMovie(Movie movie){
    this->movies.push_back(movie);
};