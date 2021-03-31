//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose: Pointer variable initialization with the address of another variable and then prints normal variable value and its address using pointer variable.

#include <stdio.h>	//Preprocessor directive to include standard input output header file.

int main() {	//Start of the main body function.
    float x=12.21;
    float *y;
    y = &x;
    printf("Address of x = %d\n",y);
    printf("Address of x = %.2f",*y);

    return 0;   //return statement
}	//End of the main function body.