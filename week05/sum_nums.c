// A function for calculating the sum of 2 integers and storing the result in a 
// variable in main
// Patrick Chambers, 16/03/22


#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    int a = 42;
    int b = 100;
    int sum = 0;
    int *sum_p = &sum;

    // We can pass sum_p or &sum into this function, they are equivalent
    sum_nums(a, b, sum_p);
    
    printf("The sum of a and b is %d\n", sum);

    return 0;
}


// Change the value of a variable in main to be the sum of 2 integers
// Takes in the 2 integers to be summed and the variable to store the result in
// Returns nothing
void sum_nums(int a, int b, int *sum) {
    int result = a + b;
    // Dereference the sum pointer, so we go to the memory address that it points 
    // and change the value of the variable there
    *sum = result;
}

