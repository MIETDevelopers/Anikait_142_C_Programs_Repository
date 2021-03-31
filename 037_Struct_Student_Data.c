//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose: Student structure contain, name, marks in different subjects, attendance percentage, Roll Number.

#include <stdio.h>  //Preprocessor directive to include standard input output header file

struct Student {
    char name[15];
    float CSE,Phy,Maths;
    float attendancePercentage;
    int rollNo;
};
struct Student inputData();
void displayData(struct Student s);

int main() {	//Start of the main body function.
    struct Student jackSparrow = inputData();
    displayData(jackSparrow);
    return 0;   //return statement
}

struct Student inputData() {
    struct Student s;

    printf("Name: ");
    gets(s.name);

    printf("\nCSE: ");
    scanf("%f",&s.CSE);

    printf("\nPhysics: ");
    scanf("%f",&s.Phy);

    printf("\nMathematics: ");
    scanf("%f",&s.Maths);

    printf("\nAttendance Percentage: ");
    scanf("%f",&s.attendancePercentage);

    printf("\nRoll No: ");
    scanf("%d",&s.rollNo);

    return s;
};
void displayData(struct Student s) {
    printf("\nEntered data is :\n");
    printf("Name: ");
    puts(s.name);
    printf("CSE = %.2f",s.CSE);
    printf("\nPhysics = %.2f",s.Phy);
    printf("\nMathematics = %.2f",s.Maths);

    printf("\nAttendance Percentage = %.2f",s.attendancePercentage);

    printf("\nRoll No. = %d",s.rollNo);
};