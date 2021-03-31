//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose:  Implementation of a function which returns a pointer.

#include <stdio.h>	//Preprocessor directive to include standard input output header file
//Start of the main body function

int* returnPointer();

int main() {	//Start of the main body function.	
    int *ptr = returnPointer();
    printf("%d",ptr);
    return 0;   //return statement.
}	//End of the main function body.

int* returnPointer() {
    int *pointer;
    int number = 717;

    pointer = &number; //pointer = address of number variable.
    return pointer; //this statement returns a pointer.
}