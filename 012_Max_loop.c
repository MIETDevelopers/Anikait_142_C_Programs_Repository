//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Maximum of n numbers using for loop.

#include<stdio.h>   //Pre processor directive to inclide standard input and output function header file.
int main(){ //Start of the main function body
    int n,i;    //Integer variables decleration.
    float upto,max; //Variable decleration of data type float.

    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\nEnter %d numbers from which you want to find max :\n", n);

    printf("Element 1  : ");
    scanf("%f", &max);  //Initialize max to the first element
    // for loop for finding max
    for(i = 2; i <= n; i++)
    {
        printf("\nElement %d  : ", i);
        scanf("%f", &upto);
        
        //if input number is larger than the current largest number
        if(max < upto)
           max = upto;    // update max to the larger value
    }
      printf("\nThe maximum from the %d numbers is  %.2f ", n, max);
    return 0;   //Return statment
}   //End of the main function body
