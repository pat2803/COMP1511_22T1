// Program to demonstrate struct pointers
// Patrick Chambers (z5264081), 30/03/2

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 256


struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LENGTH];
};

int main(void) {

    // Declaring and initialising a struct variable as normal
    struct student stu;
    stu.zID = 5123456;
    stu.wam = 95.5;
    strcpy(stu.name, "Jon");

    printf("Wam before: %lf\n", stu.wam);
    
    // Declaring and initialising a pointer to stu
    struct student *stu_pointer = &stu;


    // These next 2 lines mean the same thing! The '->' goes to the address of 
    // the struct student stored in stu_pointer and then accesses the 'wam' 
    // member of this struct student

    //(*stu_pointer).wam = 96.6;
    stu_pointer->wam = 96.6;

    // The 'wam' of the stu pointer has been updated since we went to its spot 
    // in memory via stu_pointer and changed its value
    printf("Wam after: %lf\n", stu.wam);
    // This can also be printed like this:
    // printf("Wam after: %lf\n", stu_pointer->wam);


    return 0;
}
