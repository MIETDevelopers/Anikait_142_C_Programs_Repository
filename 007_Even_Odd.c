//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Number is even or odd.

#include <stdio.h>	//Pre processor directive to inclide standard input and output function header file.
int main() {	//Start of the main function body.
    int num;	//Integer variable decleration.
    printf("Enter an integer: ");	//printf function call for entring an integer. 
    scanf("%d", &num);	//Taking input from user.

    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);	//printf function call if integer is even.
    else
        printf("%d is odd.", num);	//printf function call if integer is odd.
    
    return 0;	//Return statment.
}	//End of the main function body.