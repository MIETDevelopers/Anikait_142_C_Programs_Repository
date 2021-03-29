//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: To find max element and index in array.

#include <stdio.h>	//Pre processor directive to include standard input output function header file.
int main(){	//Start of the main function body.
  	int array[100], size, c, location = 0;	//Integer variables and array declaration.

  	printf("Enter the number of elements in array : ");	//printf function call for printing numbers of element i array.
  	scanf("%d", &size);	//Taking input from user.

  	printf("Enter %d integers\n", size);
  	//for loop to take input from uses for elements of array.
	for(c = 0; c < size; c++)
    	scanf("%d", &array[c]);
	//for loop to find out max number in array. 
	for(c = 1; c < size; c++)
    if(array[c] > array[location])
      location = c;
	
	printf("Maximum element is present at location %d and its value is %d.", location+1, array[location]);	//printf function call for printing max element and current location.	
	return 0;	//Return statement.
}	//End of the main function body.