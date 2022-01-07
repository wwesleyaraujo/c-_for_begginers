#include "Movie.h"
#include <iostream>
#include <string>
    int Movie::getRating(){
        return this->rate;
    }
std::string Movie::getName(){
    return this->name;
}
int Movie::getWatched(){
    return this->watched;
}
void Movie::setRating(rating rate){
    this->rate = rate;
}

void Movie::setName(std::string name){
    this->name= name;
}
void Movie::setWatched(int views){
    this->watched =views;
}

std::string Movie::toString(){
    std::string ret;
    ret = "Movie name: "+this->name;
    ret +=" Rating: "+std::to_string(this->rate);
    ret = ret+ " Views: " + std::to_string(Movie::getWatched());
    return ret;
}


Movie::Movie(std::string name, rating rate, int views ){
            this->name = name;
            this->rate = rate;
            this->watched = views;
}

Movie::Movie(){
            std::cout<<"Creating ..." << std::endl;
}
/* 
Movie::~Movie(){
    std::cout<<"Destroying Movie.."<<std::endl;
    delete &name;
} */