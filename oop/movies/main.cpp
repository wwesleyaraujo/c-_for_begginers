#include <iostream>
#include "Movie.h"
#include "Movies.h"

using namespace std;


int main()
{
    Movie v1("Anaconda",rating::PG, 19);
   // Create a collection

   Movies terror ;
   terror.addMovie(v1);

   cout<<terror.listMovies()<<endl;

    return 0;

}