//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Area and Perimeter of Circle, Square and Rectangle.

#include<stdio.h>	//Pre processor directive to include standard input and output function header file.	
int main(){	//Start of the main function body.
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;	//Variables decleration of data type float.
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);	//Taking input from user.
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));	//printf function call for area of circle.
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));	//printf function call for perimeter of circle.
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));	//printf function call for area of square.
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));	//printf function call for perimeter of square.
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));	//printf function call for area of rectangle.
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));	//printf function call for perimeter of rectangle.
	return 0;	//Return statment.
}	//End of the main function body.          