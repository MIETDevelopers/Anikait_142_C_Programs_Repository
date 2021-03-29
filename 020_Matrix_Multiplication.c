//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Program to perform  matrix multiplication.

#include<stdio.h>	//Pre processor directive to include standard input and output function header file.
int main () //Main function defination.
{	//Start of main function body.
	int A[3][3], B[3][3], C[3][3];	//Arrays declaration.
	int i, j, k, sum; //Integer variable declaration.

	//Printing first Matrix.
	printf("Enter 9 number for first Matrix\n");	//printf function call for entring 9 number for first matrix.
	for(i=0; i<=2; i++ )	//for loop for rows.
		for(j=0; j<=2; j++)	//for loop for columns.
			scanf("%d",&A[i][j]);	//Taking input from user.
	
	//Printing second Matrix.
	printf("Enter 9 number for second Matrix\n");	//printf function call for entring 9 number for second matrix.
	for(i=0; i<=2; i++ )	//for loop for rows.
		for(j=0; j<=2; j++)	//for loop for columns.
			scanf("%d",&B[i][j]);	//Taking input from user.
	
	//for loop for matrix multiplication logic.
	for(i=0; i<=2; i++)	//for loop for rows.
		for(j=0; j<=2; j++){	//for loop for columns.
			sum = 0;	//Taking sum equal to zero so it  will not take some garbage value.
			for(k=0; k<=2; k++)
				sum= sum + A[i][k] * B[k][j];
				C[i][j] = sum;	  			
		}

	printf("End result:\n");                      	
	for(i=0; i<=2; i++){	
		for(j=0; j<=2; j++)
			printf("%d ",C[i][j]); //printf function call.
			printf("\n");	//Printing new line after every loop. 
	}
	return 0;	//return statment.			
}	//End of main function body.