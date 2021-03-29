//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Check if a number is prime or not using while loop.

#include<stdio.h>   //Pre processor directive to inclide standard input and output function header file. 
  int main(){   //Start of the main function body 
    int n, count = 2, num = 1;  
  
    printf("Enter a number you want to check : ");  
    scanf("%d", &n);  
    // while loop for prime
    while(count < n)  
    {  
        if(n%count == 0)  //Is a prime number logic if num equal to zero.
        {  
            num = 0;  
            break;  
        }  
        count++;  
    }  
    //If num equal to zero then it is not a prime or else. 
    if(num == 0 )
        printf("%d is not prime number\n", n);  
    else
        printf("%d is  prime number\n", n);  
  
    return 0;   //Return statment 
}   //End of the main function body 