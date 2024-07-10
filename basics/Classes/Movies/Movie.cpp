#include "Movies.h"

// Parameterized constructor for Movie
Movies::Movie::Movie(const std::string& name, int numOfTimesWatched, Rating movieRating)
    : name(name), numOfTimesWatched(numOfTimesWatched), movieRating(movieRating) {}

// Copy constructor for Movie
Movies::Movie::Movie(const Movie& other)
    : name(other.name), numOfTimesWatched(other.numOfTimesWatched), movieRating(other.movieRating) {}
