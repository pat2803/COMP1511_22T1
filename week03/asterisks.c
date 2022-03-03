// A program to print out a single vertical line of asterisks of a length 
// inputted by the user
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    // Scan in an integer size
    int size;
    printf("Please enter an integer: ");
    scanf("%d", &size);

    // Use a while loop to print out multiple asterisks
    int i = 0;
    while (i < size) {
        printf("*\n");
        i++;
    }

    return 0;
}