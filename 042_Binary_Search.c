//Author: Anikait Singh
//creation date: 28 Mar, 2021
//Purpose: Binary search on an array.

#include <stdio.h>	//Preprocessor directive to include standard input output header file.
int binarySearch(int a[],int ,int );    //declaration of the binary search function.

int main() {    //Start of the main body function.
    int a[10];
    int data;

//for loop to insert values in t array a.
    for(int i=0;i<10;i++) {
        printf("Enter value of element no. %d: ",i+1);
        scanf("%d",&a[i]);
    }
//insertion sort algorithm to sort the array.
    for(int i=1;i<10;i++) {
        int temp = a[i];
        int j = i-1;

        while(a[j]>temp && j>=0) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
    
    printf("\nEnter the number you want to search: ");
    scanf("%d",&data);

    printf("Index of required number is: %d",binarySearch(a,10,data));   //this function calls the binary function.
    return 0;   //Return statement.
}   //End of main function body.

int binarySearch(int a[],int n,int data) {
    int L=0,R=n,mid;

    while(1) {
        mid = (L+R)/2;

        if(data == a[mid]) {
            return mid;
        }
        else if(data > a[mid]) {
            L = mid+1;  //data > a[mid] means that the required number is on the right side of a[mid].
        }
        else if(data < a[mid]) {
            R = mid-1;  //data > a[mid] means that the required number is on the left side of a[mid].
        }
    }
}