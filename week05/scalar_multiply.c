// A function for multiplying each integer in an array by a scalar value
// Patrick Chambers, 16/03/22

#include <stdio.h>

#define NUM_ROWS 3
#define NUM_COLS 4

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);
void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {
    
    // Declare and initialise the values of the matrix (2D array)
    int matrix[NUM_ROWS][NUM_COLS] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}
    };

    printf("Matrix before scalar multiply:\n");
    print_matrix(NUM_ROWS, NUM_COLS, matrix);

    scalar_multiply(NUM_ROWS, NUM_COLS, matrix, 5);

    printf("Matrix after scalar multiply:\n");
    print_matrix(NUM_ROWS, NUM_COLS, matrix);

    return 0;
}


// Print out each value in a matrix
// Takes in the number of rows and columns in the matrix and the matrix itself
// Returns nothing
void print_matrix(int rows, int columns, int matrix[rows][columns]) {

    int row = 0;
    while (row < rows) {

        int col = 0;
        while (col < columns) {
            printf("%d ", matrix[row][col]);
            col++;
        }

        printf("\n");
        row++;
    }
}

// Multiply each value in an array by a scalar value
// Takes in the number of rows and columns in the matrix, the matrix itself and 
// the scalar value to multiply by
// Returns nothing
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    int row = 0;
    while (row < rows) {

        int column = 0;
        while (column < columns) {
            // Multiply each matrix value by the scalar
            matrix[row][column] *= scalar;
            column++;
        }

        row++;
    }

}