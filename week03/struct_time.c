// A program that uses a struct to store a specific time of day and prints it 
// in a human readable format
// Patrick Chambers, 03/03/2022

#include <stdio.h>

// Define our struct so the program knows what fields it has
struct time {
    int hour;
    int minute;
    char meridian;
};

int main(void) {

    // Declare a struct time called lunch_time. Note that the variable type is 
    // 'struct time', not just 'time'
    struct time lunch_time;
    // Initialise each field
    lunch_time.hour = 12;
    lunch_time.minute = 9;
    lunch_time.meridian = 'p';

    // Print the time in a nice format. 
    // %02d means that leading zeros will be added to the printed integer to 
    // make it up to 2 digits, e.g. '9' will be printed as '09'
    printf(
        "Lunch time is at %03d:%02d%cm\n", 
        lunch_time.hour, 
        lunch_time.minute, 
        lunch_time.meridian
    );

    return 0;
}
