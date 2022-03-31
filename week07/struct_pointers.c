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

    struct student stu;
    stu.zID = 5123456;
    stu.wam = 95.5;
    strcpy(stu.name, "Jon");

    printf("Wam before: %lf\n", stu.wam);
    
    struct student *stu_pointer = &stu;
    stu_pointer->wam = 96.6;

    printf("Wam after: %lf\n", stu.wam);


    return 0;
}
