#include <stdio.h>      //Pre processor directive to inclide standard input and output function header file.  
int main(){  //Start of the main function body
    int n, i, count = 0;
 
    printf("Enter number to check prime number or not : ");
    scanf("%d",&n);
    //for loop to check prime
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)  // check for non prime number
        {
            count=1;
            break;
        }
    }
    //if count equal to zero then n is prime
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    return 0;   //Return statment    
}    //End of the main function body