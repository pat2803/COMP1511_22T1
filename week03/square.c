// A program to print out a square of asterisks of a size 
// inputted by the user
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    // Scan in an integer size
    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);

    // Loop through each row of the square
    int row = 0;
    while (row < size) {
        // For each row, loop through each column of the row
        int col = 0;
        while (col < size) {
            printf("*");
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}