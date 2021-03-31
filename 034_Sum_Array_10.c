//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: SUM OF ELEMENTS OF ARRAY.

#include <stdio.h> //Pre-Process directive to include standard input output header file
int main(){ //main function body starting.
    int arr[10];    //Array variable decleration.
    int i, sum=0;   //Integer variables decleration.

    //Input elements in array
    printf("Enter 10 elements in the array:\n ");
    for(i=0; i<9; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Add each array element to sum
    for(i=0; i<10; i++)
    {
        sum = sum + arr[i];
    }
    //Printing the Sum of all elements of array
    printf("Sum of all elements of array = %d", sum); 

    return 0;   //Return statement.
}   //End of the main function body.