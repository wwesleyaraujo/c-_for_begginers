#include "Movies.h"
#include "Movie.h"
#include <string>
void Movies::addMovie(std::string name, Rating rate, int watched){
    
    for (auto search : this->mv_collection){
        if( search.getName().compare(name) == 0){
            std::cout <<"The movie there's already in collection ..."<<std::endl;
            return;
        }
    }
    this->mv_collection.push_back(Movie(name,rate,watched));
}

void Movies::incWatch(std::string name){
     for (auto search : this->mv_collection){
        if( search.getName().compare(name)){
            search.setWatched((search.getWatched()+1));
            std::cout <<"The movie watched  is incremented ..." << std::endl;
            return;
        }
    }
    std::cout <<"Error! The movie wasn't found..." << std::endl;
}

void Movies::displayMovies(){
    
    for ( auto m : mv_collection){
    
        std::cout << "Name: " << m.getName() << " | Rating: "<< m.getRatingStr()<< " | Watched: "<< m.getWatched()<<std::endl;
    }
    return; 
}

Movies::Movies(/* args */)
{
}
Movies::Movies(std::vector<Movie> mv )
{
    this->mv_collection = mv;
}

Movies::~Movies()
{
    delete [] this;
    std::cout <<"Destruction movie list ..." <<std::endl;
}