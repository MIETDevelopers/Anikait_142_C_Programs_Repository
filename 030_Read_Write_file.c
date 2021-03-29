//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Program to read and write in a file.


#include <stdio.h>//Preprocessor directive to include input output functions header file
#include <stdlib.h>//Preprocessor directive to include standard library header file
struct s{	//start of structure body
	//Creating a user defined data type using structures.
	char text[1000];	//member 
};	//end of structure body
 int main(){	//start of main function body.
	struct s a[1000],b[1000];	//structure a ,b
	FILE *fptr;	//declaring pointer 
	int i;	//declaring variable
	fptr=fopen("D:\\Anikait_142_C_Programs_Repository\\030_Read_Write_file.txt","wb"); //Opening the file from the location.
	
	for (i=0;i<1;++i){	//for loop start
		fflush(stdin);
		printf("Enter Text: ");
		gets(a[i].text); //Scanning the entered text.
	}	//end of for loop
	
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("D:\\Anikait_142_C_Programs_Repository\\030_Read_Write_file.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");	//printf calling to print entered detail are
	for (i=0;i<1;++i){	//start of for loop body
		printf("%s\n",b[i].text); //Printing the entered text.
	}	//end of for loop
	fclose(fptr); //Closing the program.
}	//End of main function body.