#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 256

#define SUCCESS 0
#define NOT_FOUND 1

// STRUCT DEFINITIONS

struct movie {
    char title[MAX_STR_LENGTH];
    double rating;
    int length;

    struct movie *next;
};

struct genre {
    char name[MAX_STR_LENGTH];

    struct movie *movies;
    struct genre *next;
};

struct cinema {
    struct genre *genres;
};

// FUNCTION PROTOTYPES
struct cinema *create_cinema();
void add_genre(struct cinema *cinema, char *genre_name);
int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_title,
    double rating,
    int length
);
void print_genre(struct cinema *cinema, char *genre_name);
void print_movie(struct movie *current_movie);
struct genre *find_genre(struct cinema *cinema, char *genre_name);

// This function has been provided for you to test!
int main(void) {
    struct cinema *cinema = create_cinema();
    
    add_genre(cinema, "Action");
    
    // Will only work after finishing this function!
    add_movie(cinema, "Action", "Scooby Doo", 78.5, 90);
    add_movie(cinema, "Action", "Mission Impossible", 87.2, 93);
    add_movie(cinema, "Drama", "Squid Game", 95.7, 600);
    
    // Will only work after finishing this function!
    print_genre(cinema, "Action");
    print_genre(cinema, "Drama");
}


/** PROVIDED FUNCTIONS **/


// Creates a new `struct cinema` and returns it.
//
// `create_cinema` takes in no parameters.
//
// `create_cinema` will return a pointer to a new `struct cinema`.
//
struct cinema *create_cinema() {
    struct cinema *new = malloc(sizeof(struct cinema));
    new->genres = NULL;

    return new;
}


// Adds a genre to the head of the provided cinema of `genre_name`
//
// `add_genre` takes in these parameters:
// - `cinema` a pointer to the `struct cinema` to add the genre to
// - `genre_name` name of the genre to add to the cinema
//
// `add_genre` returns nothing.
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size
//
void add_genre(struct cinema *cinema, char *genre_name) {
    struct genre *new = malloc(sizeof(struct genre));
    strcpy(new->name, genre_name);
    new->movies = NULL;
    new->next = NULL;

    new->next = cinema->genres;
    cinema->genres = new;
}

////////////////////////////////////////////////////////////////////////////////
//////////////////////// Implement the functions below! ////////////////////////
////////////////////////////////////////////////////////////////////////////////


// Adds a movie to the end of the desired genre in the desired cinema.
//
// `add_movie` takes in these parameters:
// - `cinema` - a pointer to the `struct cinema` to add the movie to
// - `genre_name` - name of the desired genre for the movie to add to the cinema
// - `movie_title` - name of the movie to add to the genre
// - `rating` - Rating (out of 100) of the provided movie
// - `length` - Length (in minutes) of the provided movie
//
// `add_movie` returns, in order of precedence:
// `NOT_FOUND` if genre was not found in cinema
// `SUCCESS` if movie is added
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size
// - `movie_title` will always be a valid string of `MAX_STR_LENGTH` size
// - `rating` will always be a positive number between [0, 100] inclusive
// - `length` will always be a positive integer
//
int add_movie(
    struct cinema *cinema,
    char *genre_name,
    char *movie_title,
    double rating,
    int length
) {

    // Create movie
    // This could go into a function e.g.
    // struct movie *new_movie = create_movie(movie_title, rating, length)
    struct movie *new_movie = malloc(sizeof(struct movie));
    strcpy(new_movie->title, movie_title);
    new_movie->rating = rating;
    new_movie->length = length;
    new_movie->next = NULL;

    // Find matching genre using helper function
    struct genre *curr_genre = find_genre(cinema, genre_name);
    
    // If curr_genre is NULL then none of the genre names matched the given 
    // genre name
    if (curr_genre == NULL) {
        return NOT_FOUND;
    }

    // Add movie to end of genre's movie list
    struct movie *curr_movie = curr_genre->movies;
    // If movie list is empty, current genre's movie list should just be this 
    // new movie
    if (curr_movie == NULL) {
        curr_genre->movies = new_movie;
    } else {
        // Loop through until you reach the end of the movie list and make the last
        // movie point at the new movie
        while (curr_movie->next != NULL) {
            curr_movie = curr_movie->next;
        }
        curr_movie->next = new_movie;
    }
    return SUCCESS;
}


// Prints all the movies in the desired genre
//
// Each movie of the genre is printed on a new line in the format:
//
// <movie1-TITLE>, <movie1-RATING>/100 (<movie1-LENGTH> minutes)
// <movie2-TITLE>, <movie2-RATING>/100 (<movie2-LENGTH> minutes)
// <movie3-TITLE>, <movie3-RATING>/100 (<movie3-LENGTH> minutes)
// ...
//
// `print_genre` takes in these parameters:
// - `cinema` a pointer to the `struct cinema` to print the genre
// - `genre_name` name of the desired genre to print in the cinema
//
// `print_genre` returns nothing.
//
// ASSUMPTIONS:
// - `cinema` will always be a valid pointer
// - `genre_name` will always be a valid string of `MAX_STR_LENGTH` size
void print_genre(struct cinema *cinema, char *genre_name) {
    struct genre *matching_genre = find_genre(cinema, genre_name);
    if (matching_genre == NULL) {
        return;
    }

    // Loop through each movie under this genre and call the print_movie 
    // function to print it
    struct movie *curr_movie = matching_genre->movies;
    while (curr_movie != NULL) {
        print_movie(curr_movie);
        curr_movie = curr_movie->next;
    }
    
}

// Given a pointer to a struct movie, prints a single movie in the format:
// <movie-TITLE>, <movie-RATING>/100 (<movie-LENGTH> minutes)
void print_movie(struct movie *movie) {
    printf(
        "%s, %.1lf/100 (%d minutes)\n", 
        movie->title, 
        movie->rating, 
        movie->length
    );
}

// Finds the genre that matches the given genre name in the cinema
// Takes the cinema struct and the genre name to find
// Returns a pointer to the genre struct that has a matching name, or NULL
// if no genre with a matching name was found
struct genre *find_genre(struct cinema *cinema, char *genre_name) {
    
    struct genre *curr_genre = cinema->genres;
    while (curr_genre != NULL && strcmp(curr_genre->name, genre_name) != 0) {
        curr_genre = curr_genre->next;
    }
    // When we reach this point, we know that the while loop exited, so either 
    // this genre name matched the given genre name or curr_genre reached NULL
    return curr_genre;

}