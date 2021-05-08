#include <iostream>
#include "Movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies,std::string name,std::string rating,int watched);


void increment_watched(Movies &movies, std::string name){
    if (movies.increment(name)){
        std::cout<<"increment added"<<std::endl;
    }
    else{
        std::cout<<"Not found"<<std::endl;
    }
}
void add_movie(Movies &movies, std::string name, std::string rating, int watched){
    if (movies.add_movie(name, rating, watched)){
        std::cout<<"Movie added"<<std::endl;
    }
    else{
        std::cout<<"Movie already added"<<std::endl;
    }
}

int main(){
    Movies my_movies;
    my_movies.display();
    
    add_movie(my_movies,"Aviator","8",1);
    add_movie(my_movies,"John Wick","9",5);
    add_movie(my_movies,"Avengers","8",4);
    add_movie(my_movies,"Fast and Furious","9",6);
    add_movie(my_movies,"Inception","9", 2);
    my_movies.display();
    return 0;
}
