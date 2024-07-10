#include "Movies.h"
#include <iostream>

// Method to add a movie
void Movies::addMovie(const std::string& name, int numOfTimesWatched, Movie::Rating rating) {
    movies.emplace_back(name, numOfTimesWatched, rating);
}

// Method to remove a movie by name
void Movies::removeMovie(const std::string& name) {
    for (auto it = movies.begin(); it != movies.end(); ++it) {
        if (it->name == name) {
            movies.erase(it);
            break;
        }
    }
}

// Method to display all movies
void Movies::displayAllMovies() const {
    for (const auto& movie : movies) {
        std::cout << "Name: " << movie.name << ", Times Watched: " << movie.numOfTimesWatched
                  << ", Rating: ";
        switch (movie.movieRating) {
            case Movie::Rating::G:
                std::cout << "G";
                break;
            case Movie::Rating::PG:
                std::cout << "PG";
                break;
            case Movie::Rating::PG_13:
                std::cout << "PG-13";
                break;
            case Movie::Rating::R:
                std::cout << "R";
                break;
        }
        std::cout << std::endl;
    }
}

// Method to get the count of movies
int Movies::getNumberOfMovies() const {
    return movies.size();
}