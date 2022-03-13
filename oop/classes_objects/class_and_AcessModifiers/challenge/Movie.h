#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>

 enum  Rating : unsigned short {
           G,
           PG,
           PG_13,
           R
 };
class Movie{
    private:
        std::string name;
        Rating rate;
        int watched;
    public:
        Movie();
        ~Movie();
        Movie(std::string name ="empty" , Rating rate = Rating::G , int watched = 0);
        void setName(std::string name);
        void setRating(Rating rate);
        void setWatched(int watched);
        std::string getName();
        Rating  getRating();
        int getWatched();
        std::string getRatingStr();
};
#endif