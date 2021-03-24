#include<stdio.h>	//Pre processor directive to include standard input and output function header file.
int main () //Main function defination.
{	//Start of main function body.
	int A[3][3];	//Array declaration.
	int i, j; //Integer variable declaration.

	//Printing 2D Array.
	printf("Enter two dimensional array elements:\n");   //printf function call for entring 9 number for 2D Array.
   for(i=0; i<=2; i++ ) //for loop for rows.
      for(j=0; j<=2; j++)  //for loop for columns.
         scanf("%d",&A[i][j]);   //Taking input from user.
	    
   //Displaying array elements
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
           printf("Value for A[%d][%d]: %d\n", i, j, A[i][j]);
      }
   }
	return 0;	//Return statement.
}	//End of the main function body.	