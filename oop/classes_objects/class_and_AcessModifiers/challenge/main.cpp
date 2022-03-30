#include <iostream>
#include "Movies.h"

int main(){
    Movies *mv_list = new Movies();
    mv_list->addMovie("Spider man", Rating::R, 0);
    mv_list->addMovie("Spider man", Rating::R, 0);
    mv_list->addMovie("Spider man", Rating::R, 0);
    mv_list->addMovie("Mario", Rating::R, 0);
    //mv_list->addMovie("Spider man", Rating::R, 0);
    mv_list->displayMovies();
}