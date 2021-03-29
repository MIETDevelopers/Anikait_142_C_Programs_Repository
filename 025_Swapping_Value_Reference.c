//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Swapping of two numbers using  call by value and call by reference.

//Swapping of two numbers using  call by value.
#include <stdio.h>  //Pre processor directive to include standard input output function header file.
void swap(int n1, int n2);	//SWAP FUNCTION CALLING
int main(){		//Start of the main function body.
    int num1 = 5, num2 = 10;	//DECLARING VARIABLES
    swap(num1, num2);	//SWAP FUNCTION INITIALIZE
    printf("num1=%d, ", num1);	//PRINTING num1
    printf("num2=%d", num2);	//PRINTING num2
    return 0;		//RETURN STATEMENT
}	//End of the main function body.

void swap(int n1, int n2){		//FUNCTION DEFINITION
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

//Swapping of two numbers using  call by reference.
#include <stdio.h>	//Pre processor directive to include standard input output function header file. 
void swap(int *n1, int *n2);	//SWAP FUNCTION CALLING
int main(){	//Start of the main function body.	
    int num1 = 5, num2 = 10;	//DECLARING VARIABLES
    swap( &num1, &num2);	//SWAP INITIALIZE
    printf("num1=%d, ", num1);	//PRINTING num1
    printf("num2=%d", num2);	//PRINTING num2
    return 0;		//RETURN STATEMENT
}	//End of the main function body.

void swap(int* n1, int* n2){	//SWAP FUNCTION DEFINITION
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}