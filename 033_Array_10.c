//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: To read and print elements in  array.

#include<stdio.h>	//Pre processor directive to include standard input and output function header file.
int main () //Main function defination.
{	//Start of main function body.
	int A[10];	//Array declaration.
	int i; //Integer variable declaration.

	//Printing Array elements.
	printf("Enter array elements:\n");   //printf function call for entring 10 number for Array.
   for(i=0; i<=9; i++ ) //for loop for rows.
      scanf("%d",&A[i]);   //Taking input from user.
	    
   //Displaying array elements
   for(i=0; i<10; i++) {
      printf("Value for A[%d]: %d\n", i, A[i]);
   }
	return 0;	//Return statement.
}	//End of the main function body.	