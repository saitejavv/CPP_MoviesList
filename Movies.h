#ifndef _MOVIES_H
#define _MOVIES_H
#include "Movie.h"
#include<string>
#include<vector>

class Movies
{

private:
    std::vector<Movie>movies;
public:
    Movies();
    ~Movies();
    bool add_movie(std::string name,std::string rating,int watched);
    bool increment(std::string name);
    void display() const;
};

#endif // _MOVIES_H
