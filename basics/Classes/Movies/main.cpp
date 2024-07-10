#include <iostream>
#include "Movies.h"  // Include the header file that declares Movies class

int main() {
    // Create an instance of Movies
    Movies myMovies;

    // Add movies to the collection
    myMovies.addMovie("Inception", 10, Movies::Movie::Rating::PG_13);
    myMovies.addMovie("The Dark Knight", 8, Movies::Movie::Rating::PG_13);
    myMovies.addMovie("Interstellar", 12, Movies::Movie::Rating::PG_13);

    // Display all movies
    std::cout << "All Movies:" << std::endl;
    myMovies.displayAllMovies();

    // Add another movie
    myMovies.addMovie("Pulp Fiction", 15, Movies::Movie::Rating::R);

    // Display all movies again
    std::cout << "\nAll Movies after adding 'Pulp Fiction':" << std::endl;
    myMovies.displayAllMovies();

    // Remove a movie
    myMovies.removeMovie("The Dark Knight");

    // Display all movies after removal
    std::cout << "\nAll Movies after removing 'The Dark Knight':" << std::endl;
    myMovies.displayAllMovies();

    // Get the number of movies
    std::cout << "\nNumber of movies: " << myMovies.getNumberOfMovies() << std::endl;

    return 0;
}
