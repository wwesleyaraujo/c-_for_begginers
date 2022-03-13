#include <iostream>
#include "Movie.h"

int main(){
    Movie m1{"Spider man", Rating::R , 0};

    std::cout << "Name: " << m1.getName() << " | Rating: "<< m1.getRatingStr()<< " | Watched: "<< m1.getWatched()<<std::endl;

}