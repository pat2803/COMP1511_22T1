// Making a function that allocates memory to a new struct student, initialises
// its values and returns a pointer to it
// Patrick Chambers (z5264081), 7/4/22

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 256

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next_student;
};

struct student *create_student(int zID, double mark, char *name);

int main(void) {
    
    struct student *tom = create_student(55555, 99.9, "Tom");
    struct student *patrick = create_student(44444, 99.9, "Patrick");
    struct student *lucinda = create_student(77777, 99.9, "Lucinda");

    struct student *head = tom;
    tom->next_student = patrick;
    printf("%s\n", head->next_student->name);
    patrick->next_student = lucinda;
    printf("%s\n", head->next_student->next_student->name);

    printf("%s\n", tom->name);
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

    return new_student;
}



