//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: A C program to create Simple Calculator using switch case for every operation.

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

//A C program to create Simple Calculator using function for every operation.

#include <stdio.h>
//function start
double cal(double val1, double val2, char ope)
{
    if(ope == '+'){
        printf("Addition of two numbers is %lf ", val1 + val2);
    }
    else if(ope == '-'){
            printf("Subtraction of two numbers is %lf ", val1 - val2);
        }
    else if(ope == '*'){
            printf("Multiplication of two numbers is %lf ", val1 * val2); 
        }
    else if(ope == '/'){
            printf("Division of two numbers is %lf ", val1 / val2);
        }
    else{
        printf("Invalid operator");
    }
} //function end

int main(){ //Start of main function body.
    double val1 , val2;
    char ope;

    printf("Enter First Number ");
    scanf("%lf", &val1);

    printf("Enter Second Number ");
    scanf("%lf", &val2);

    printf("Enter '+' for Add\n '-' for Sub\n '*' for Mul\n '/' for Div\n");
    scanf(" %c", &ope);

    cal(val1,val2,ope); //calling function
    return 0;
}   //End of main function body.
