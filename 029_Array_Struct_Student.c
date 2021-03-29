//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Array of structures for student marks for each student and passing  it to function for various operations.

#include <stdio.h>	//Pre processor directive to include standard input output function header file.
#include <string.h>	//Pre-Process directive to include string input output header file.
struct student{
    int id;
    char name[30];
    float percentage;
};
 
int main(){	 //Start of main function body.
    int i;
    struct student record[3];
 
    // 1st student's record
    record[0].id=1;
    strcpy(record[0].name, "Astro");
    record[0].percentage = 86.5;
 
    // 2nd student's record         
    record[1].id=2;
    strcpy(record[1].name, "Sonic");
    record[1].percentage = 90.5;
 
    // 3rd student's record
    record[2].id=3;
    strcpy(record[2].name, "Wazir");
    record[2].percentage = 92.5;
 
    for(i=0; i<3; i++){
        printf("     Records of STUDENT : %d \n", i+1);
        printf(" Id is: %d \n", record[i].id);
        printf(" Name is: %s \n", record[i].name);
        printf(" Percentage is: %f\n\n",record[i].percentage);
    }
    return 0;	 //Return statement.
}	 //End of main function body.