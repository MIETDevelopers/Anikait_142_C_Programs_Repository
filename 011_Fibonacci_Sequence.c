//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Fibonacci sequence using for loop.

#include<stdio.h>	//Pre processor directive to inclide standard input and output function header file.  
int main(){	//Start of the main function body.  
	int x, y, i, fib , upto;	//Integer variables decleration.
	printf("Fibonacci sequence upto =");	//printf function call for printing fibonacci sequence upto.
	scanf("%d",&upto);	//Taking input from user.
	printf("First %d terms of Fibonacci series are =\n",upto);	//printf function call for upto you want to print series are.

	x = 0;	//Value assigned to x
  	printf("%d\t", x);	//Printing value of x.
  	y = 1;
  	printf("%d\t", y);
  	fib = x + y;	//logic for addition.
  	printf("%d\t", fib);	//Printing value of fib.
	
	//for loop and logic for fibonacci sequence. 
	for(i=4;i<=upto;++i){
		x = y;
		y = fib;
		fib = x + y;
		printf("%d\t ",fib);
	}    
	return 0;	//Return statment
}	//End of the main function body.          