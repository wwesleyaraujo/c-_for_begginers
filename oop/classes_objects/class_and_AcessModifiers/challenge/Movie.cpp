#include "Movie.h"
#include <iostream>
#include <string>
Movie::Movie(){
}

Movie::~Movie(){
    std::cout << "deleting movie.."<<std::endl;
}

 Movie::Movie(std::string name , Rating rate , int watched ){
     this->name = name;
     this->rate = rate;
     this->watched = watched;
 }
 
void Movie::setName( std::string name) {
    this->name = name;
}

std::string Movie::getRatingStr(){
    std::string str_rate{"G"};

    switch (this->rate){
        case 0:
            str_rate = "G";
            break;
        case 1: 
            str_rate = " PG";
            break;
        case 2: 
            str_rate = " PG_13";
            break;
        case 3: 
            str_rate = "R";
            break;
        default:
            break;
    }
    return str_rate;
}

std::string Movie::getName(){
    return this->name;
}

void Movie::setRating( Rating rating ){
    this->rate = rating ; 
}

Rating Movie::getRating (){
    return this->rate;
}

void Movie::setWatched(int watched){
    this->watched = watched;
}

int Movie::getWatched(){
    return this->watched;
}