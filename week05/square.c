// A program that prints out a square of asterisks, first using 2D while loops 
// then using a 2D array
// Patrick Chambers, 16/03/22

#include <stdio.h>

#define SIZE 7

// Function prototype for printing the square
void print_square(int length, char array[length][length]);

int main(void) {

    // Declaring our square array
    char square_array[SIZE][SIZE];
    
    // Initialise the square array to contain '*'
    int row = 0;
    while (row < SIZE) {
        int column = 0;
        while (column < SIZE) {
            // Set each value in the array to be '*'
            square_array[row][column] = '*';
            column = column + 1;
        }
        row = row + 1;
    }

    // Call print_square to print out values in the array
    print_square(SIZE, square_array);

    return 0;
}

// Prints out each value in a square array
// Takes in the length of each side of the array and the array itself
// Returns nothing
void print_square(int length, char array[length][length]) {

    int row = 0;
    while (row < length) {
        int column = 0;
        while (column < length) {
            // Print out the value at each index of the 2d array
            printf("%c", array[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }

}