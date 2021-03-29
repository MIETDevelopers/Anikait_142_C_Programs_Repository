//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Area of Circle, Square and Rectangle based on user choice.

#include<stdio.h>	//Pre processor directive to inclide standard input and output function header file.
int main(){		//Start of the main function body.                             
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;	//Variable decleration of data type float.
	printf("Enter value of radius of circle:");	//printf function call for entring.
	scanf(" %f", &raduisOfCircle);

	printf("Enter value of side of square:");	//printf function call for entring  value of side of square.
	scanf(" %f", &sideOfSquare);	//Taking input from user.

	printf("Enter value of legth of rectangle:");	//printf function call for entring value of legth of rectangle.
	scanf(" %f", &legthOfRectangle);

	printf("Enter value of breadth of rectangle:");	//printf function call for entring value of breadth of rectangle.
	scanf(" %f", &breadthOfRectangle);

	printf("Area of Circle: %.2f",((22*raduisOfCircle*raduisOfCircle)/7));	//printf function call for area of circle.
	printf("\nArea of Square: %.2f",(sideOfSquare*sideOfSquare));	//printf function call for area of square.
	printf("\nArea of Rectangle: %.2f",(legthOfRectangle*breadthOfRectangle));	//printf function call for area of rectangle.
	return 0;	//Return statment.
}	//End of the main function body.          