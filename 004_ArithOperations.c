#include <stdio.h>	//Pre processor directive to include standard input output function header file.	
int main(){	//Start of the main function body.
	char operator;	//Variable decleration of data type character.
	double n1, n2;	//Variable decleration of data type double.
	printf("Enter an operator (+, -, *, /): ");	//printf function call for entring an operator.                                                                                                                                                                                                               
	scanf("%c", &operator);	//Taking input from user.
	printf("Enter first operand:");
	scanf("%lf",&n1);
	printf("Enter second operand:");
	scanf("%lf",&n2);
	switch(operator)	//switch operator for calculating two number given by user according to entered operator. 
	{
		case '+':
			printf("%.1lf + %.1lf = %.1lf", n1 , n2 , n1+n2);
			break;
		case '-':
			printf("%.1lf - %.1lf = %.1lf", n1 , n2 , n1-n2);
			break;
		case '*':
			printf("%.1lf * %.1lf = %.1lf", n1 , n2 , n1*n2);
			break;
		case '/':
			printf("%.2lf / %.2lf = %.2lf", n1 , n2 , n1/n2);
			break;
		default:
			printf("Error operator is not correct");
	}
	return 0;	//Return statement.
}	//End of main function body.