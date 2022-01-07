#include <string>
#ifndef _MOVIE_H
#define _MOVIE_H
enum rating : int  {
    G,
    PG,
    PG_13,
    R
};
class Movie{

    std::string name;
    rating rate;
    int watched;

    public:
        Movie(std::string name, rating rate, int views );

        Movie();
        //~Movie();
        int getRating();
        std::string getName();
        int getWatched();
        void setRating(rating rate);
        void setName(std::string name);
        void setWatched(int views);

        std::string toString();

};


#endif