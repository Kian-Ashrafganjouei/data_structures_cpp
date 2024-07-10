#ifndef MOVIES_H
#define MOVIES_H


#include <vector>  // Include vector header for std::vector
#include <string>  // Include string header for std::string
#include <iostream>

class Movies {
    public:
        class Movie {
        public:
            std::string name;
            int numOfTimesWatched;
            enum class Rating {
                G = 0,
                PG,
                PG_13,
                R
            };

            Rating movieRating;  // Example member of the enum type

            // Parameterized constructor
            Movie(const std::string& name = "", int numOfTimesWatched = 0, Rating movieRating = Rating::G);

            // Copy constructor
            Movie(const Movie& other);

        };

    // Method to add a movie
    void addMovie(const std::string& name, int numOfTimesWatched, Movie::Rating rating);

    // Method to remove a movie by name
    void removeMovie(const std::string& name);

    // Method to display all movies
    void displayAllMovies() const;

    // Method to get the count of movies
    int getNumberOfMovies() const;

    private:
        std::vector<Movie> movies;
};

#endif // MOVIES_H