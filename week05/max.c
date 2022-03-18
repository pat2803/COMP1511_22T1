// A function that returns the address of the larger of 2 integers, where 
// address of the integers is passed to the function
// Patrick Chambers, 16/03/22


#include <stdio.h>

int *max(int *a, int *b);

int main(void) {
    int num_1 = 2;
    int num_2 = 6;

    

    // Store the address of the larger number
    int *address_of_max = max(&num_1, &num_2);
    
    // Print out the max and its address, dereferencing address_of_max to access 
    // the variable that it points at and print it out
    // The "%p" is the format code used to print out memory addresses 
    // ("p" for pointer)
    printf(
        "The larger integer is %d, which is stored at the address %p\n", 
        *address_of_max, address_of_max
    );



    
    printf(
        "\n"
        "This massive gibberish of letters and numbers is actually just a \n"
        "large number in hexadecimal format\n"
        "\n"
    );
    printf(
        "You don't need to know anything about hexadecimal in COMP1511, but \n"
        "it can be helpful to know what the weird numbers and letters mean :)\n"
        "\n"
    );
    printf(
        "Hexadecimal numbers are in base 16, as opposed to base 10 like the \n"
        "decimal system we are used to (e.g. 13) or the base 2 of binary \n"
        "that computers use (e.g. 1101)\n"
        "\n"
    );
    printf(
        "This means that there are 16 values that each digit of a \n"
        "hexadecimal number can take (0-9 and a-f) instead of the 10 values \n"
        "that each digit of a decimal number can take (0-9)\n"
    );

    return 0;
}


// Return the address of the larger of 2 integers (passed by their pointers)
// Takes in pointers to 2 integers
// Returns the address of the larger integer
int *max(int *a, int *b) {
    // Compare the variables pointed at by 'a' and 'b' by dereferencing them
    if (*a > *b) {
        // Return the pointer which contains the address of 'a', instead of the 
        // integer that 'a' points at 
        return a;
    } else {
        return b;
    }
}
