//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Factorial using recursion.

#include<stdio.h>  //Pre processor directive to include standard input output function header file.
long factorial(int n){  //FUNCTION DECLARATION.
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
   
int main(){ //Start of the main function body.
  int number;  
  long fact;  
  printf("Enter a number: "); //printf functon call for entring a number.  
  scanf("%d", &number);  //Taking input from user. 
   
  fact = factorial(number);  
  printf("Factorial of %d is %ld\n", number, fact); //printf function call to print factorial.  
  return 0;   //Return statement. 
} //End of main function body.