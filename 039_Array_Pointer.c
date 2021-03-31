//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose: Array name as pointer representation and print its elements values.

#include <stdio.h>	//Preprocessor directive to include standard input output header file.
int main() {	//Start of the main body function.
    int x[] = {1,2,3};

    printf("%d ",(*x+0));   //x stores the base address of the array
    printf("%d ",*(x+1));   //Thus acting as a pointer.
    printf("%d ",*(x+2));   //By incrementing the base address and using * operator, we can access array elements.
    return 0;   //return statement
}	//End of the main function body.