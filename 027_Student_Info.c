//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: To store the information of student marks using structures and find total marks of individual student.

#include <stdio.h>  //Pre processor directive to include standard input output function header file.
struct student{
    char firstName[50];
    int roll;
    float percentage;
} s[10];

int main(){ //Start of main function body.
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number: %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter percentage: ");
        scanf("%f%", &s[i].percentage);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Percentage: %.2f%", s[i].percentage);
        printf("\n");
    }
    return 0;   //Return statement. 
}   //End of main function body.