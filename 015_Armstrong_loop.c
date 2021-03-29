//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Check no. is armstrong or not using while loop.

#include<stdio.h>	//Pre processor directive to include standard input output function header file.
int main(){	//Start of the main function body.
	int n,num,r,ans=0;	//Integer variables decleration.
 
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	n=num; 
	//Loop to calculate the sum of the cubes of its digits.
	while(n>0){
		r=n%10;
		ans=ans+r*r*r;
		n=n/10;
	}
	//if else condition to print Armstrong or Not 
	if(ans==num)
		printf("%d is an Armstrong number.",num);
	else
		printf("%d is not an Armstrong number.",num);
	return 0;	//Return statement. 
}	//End of the main function body.
