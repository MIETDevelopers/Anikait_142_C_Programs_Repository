//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: A program  which demonstrates do while program.

#include <stdio.h>	//Preprocessor directive to include input output functions header file.
 int main (){	//End of main function body.

   // local variable definition
   int a = 10;

   // do loop execution
   do{
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
 
   return 0;	//Return statement.
}	//End of main function body.