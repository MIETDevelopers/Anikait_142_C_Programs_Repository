#include <stdio.h>  //Pre processor directive to include standard input output function header file.

int main(){ //Start of the main function body.
  int num, reminder, sum=0;    //Integer variables decleration.
  printf(" Enter a number : ");  //printf function call to enter a number.
  scanf("%d", &num);  //Taking input from user
  
  //while loop for sum logic  
  while(num > 0){
    reminder = num % 10;
    sum = sum + reminder;
    num = num / 10;
  }
  printf("Sum of given number = %d", sum); //printf function call to print sum of given number 
  return 0; //Return statement. 
} //End of the main function body.