//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Check whether the alphabet is a vowel or consonant.

#include <stdio.h>  //Pre processor directive to inclide standard input and output function header file.

int main(){ //Start of the main function body.
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);   //Taking input character from user

    // Condition for vowel 
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("'%c' is Vowel.", ch);
    }
    else 
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))     // Condition for consonant.
        {
            printf("'%c' is Consonant.", ch);
        }
        else
        {
            printf("'%c' is not an alphabet.", ch); //If it is neither vowel nor consonant,then it is not an alphabet.
        }
    return 0;   //Return statment.
}   //End of the main function body.
