#include<stdio.h>	//Pre processor directive to inclide standard input and output function header file.  
int main()    
{	//Start of the main function body.  
	int number,i,Factorial=1;    
	printf("Enter a number: ");    
 	scanf("%d",&number);

 	//for loop for factroial
 	for(i=1;i<=number;i++)
 	{
 		Factorial=Factorial*i;
 	}
 	printf("Factorial of %d is: %d",number,Factorial);	//printf function call for printing factroial.    
 	return 0;	//Return statment.  
}	//End of the main function body.