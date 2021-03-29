//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Fibonacci sequence using recursion.

#include<stdio.h>  //PREPROSESSIVE DIRECTIVE TO INCLUDE STANDARD INPUT OUTPUT HEADER FILE
void printFibonacci(int n){    //FUNCTION DECLARATION
    static int n1=0,n2=1,n3;    //FUNCTION INITIALIZATION
    if(n>0){
    	n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        printFibonacci(n-1);
    }
}

int main(){	//Start of main function body.
    int n;	//Integer variables decleration.          
    printf("Enter the number of elements: ");   //printf function call for entring number of elements.
    scanf("%d",&n);	//Taking input from user.
 
    printf("Fibonacci Series: ");   //PRINT OUTPUT OF THE PROGRAM
    printf("%d %d ",0,1);   //PRINT OUTPUT OF THE PROGRAM
    printFibonacci(n-2);    //FUNCTION CALLING
  return 0;	//Return statement.    
}	//End of main function body.