//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Find Euclidean distance between two points in a plane. 

#include<stdio.h>	//Pre processor directive to inclide standard input and output function header file.
#include <math.h>	//Pre processor directive to inclide math function header file.
int main(){	//Start of the main function body.
	int x1, x2, y1, y2;	//Integer variable decleration.
	double dist;	//Variable decleration of data type double.

	printf("Enter the value of x1:");	//printf function call for entring the value of x1.
	scanf("%d",&x1);	//Taking input of x1 from user.	

	printf("Enter the value of x2:");	//printf function call for entring the value of x2.
	scanf("%d",&x2);	//Taking input of x1 from user.

	printf("Enter the value of y1:");	//printf function call for entring the value of y1.
	scanf("%d",&y1);	//Taking input of y1 from user.

	printf("Enter the value of y2:");	//printf function call for entring the value of y2.
	scanf("%d",&y2);	//Taking input of y2 from user.
	
	dist = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));	//Logic of euclidean distance formula.
	printf("Distance:%.2lf",dist); 	//printf function call for printing distance.
	return 0;	//Return statment.
}	//End of the main function body.