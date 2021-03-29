//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Arithmetic operations using addition, subtraction, multiplication and remainder operator.

#include <stdio.h>	//Pre processor directive to include standard input and output function header file.
int main(){	//Start of main function body.
	int num1, num2, add, subtract, multiply;  //DECLARING THE VARIABLES NAME "num1", "num2", "add", "subtract", "multiply"
   float divide, rem;  //AND "divide" 
 
   scanf("%d%d", &num1, &num2);  //READ "num1" AND "num2"
   printf("Enter two integers = %d %d\n", num1, num2);   //PRINT THE VALUE OF "num1" AND "num2"
 
   add = num1 + num2;   //ADDITION FORMULA
   subtract = num1 - num2; //SUBTRACTION FORMULA
   multiply = num1 * num2; //MULTIPLICATION FORMULA
   divide = num1 / (float)num2;   //DIVISION FORMULA AND TYPECATING, YOU CAN ALSO WRITE: divide = (float)num1/num2
   rem = num1 % num2; 
   printf("Sum = %d\n", add);    //printf function call for printing sum of two number.
   printf("Difference = %d\n", subtract);    //printf function call for printing difference of two number.
   printf("Multiplication = %d\n", multiply);   //printf function call for printing multiplication of two number.
   printf("Division = %.2f\n", divide);	//printf function call for printing division of two number.
   printf("Remainder = %.2f\n", divide); //printf function call for printing remainder of two number.

   return 0;   //Return statement
}	//End of main function body.