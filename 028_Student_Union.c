//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose:  To store information of a student using union.

#include <stdio.h>    //Pre-Process directive to include standard input output header file..  
#include <string.h> //Pre-Process directive to include string input output header file.
 
union student{
  char name[20];
  char subject[20];
  float percentage;
};
 
int main(){ //Start of main function body.
  union student record1;
  union student record2;
 
  // assigning values to record1 union variable
  strcpy(record1.name, "Raju");
  strcpy(record1.subject, "Maths");
  record1.percentage = 86.50;
 
  printf(" Name       : %s \n", record1.name);
  printf(" Subject    : %s \n", record1.subject);
  printf(" Percentage : %f \n\n", record1.percentage);
 
  // assigning values to record2 union variable
  strcpy(record2.name, "Mani");
  printf(" Name       : %s \n", record2.name);
 
  strcpy(record2.subject, "Physics");
  printf(" Subject    : %s \n", record2.subject);
 
  record2.percentage = 99.50;
  printf(" Percentage : %f \n", record2.percentage);
  return 0;  //Return statement.
}   //End of main function body.