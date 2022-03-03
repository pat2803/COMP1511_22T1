// A program to print out a triangle of asterisks of a size 
// inputted by the user
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    // Scan in an integer size
    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);

    // Loop through each row
    int row = 0;
    while (row < size) {
        // For each row, loop through each column of the row
        int col = 0;
        while (col < size) {
            if (row >= col) {
                // Only print an asterisk if it is part of the triangle
                printf("*");
            } else {
                // Otherwise print a dash
                printf("-");
            }
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}