// Working with struct students to create a linked list
// Patrick Chambers (z5264081), 7/4/22

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 256

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    
       	 
    return 0;
}


// Initialises a struct student and returns a pointer to it
// Takes in the zID, mark and name to initialise the struct student with
// Returns a pointer to the struct student
struct student *create_student(int zID, double mark, char *name) {
    
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);

    return NULL;
}


// print_all_students

// print_tail_student
