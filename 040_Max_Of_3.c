//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose: 

#include <stdio.h>	//Preprocessor directive to include standard input output header file.
int main() {	//Start of the main body function.
    int number,max=0;
    //for loop for printing max of three.
    for(int i=0;i<3;i++) {
        printf("Enter number %d: ",i+1);
        scanf("%d",&number);

        if(number > max)
            max = number;
    }	//End of loop.
    printf("Maximum no = %d",max);
    return 0;   //return statement.
}	//End of the main body function.