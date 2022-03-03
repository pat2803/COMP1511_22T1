// A program to count up from 1 to the number inputted by the user
// Patrick Chambers, 03/03/2022

#include <stdio.h>

int main(void) {

    // Scan in a finish number
    int finish;
    printf("Enter finish: ");
    scanf("%d", &finish);

    // Loop through and print each number from 1 to finish
    int counter = 1;
    while (counter <= finish) {
        printf("%d\n", counter);
        counter++;
    }

    return 0;
}