#include<stdio.h>   //Pre processor directive to include standard input output function header file.
int main(){ //Start of main function body.
	int n, i, j; //Integer variables and array declaration.
	printf("Enter the size of an array: ");
	scanf("%d",&n);

	int arr[n];  //Array decleration.
	printf("Enter the elements for an array:\n " );
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
    }
        
 	printf("Enter element to search:"); //Asking user to enter element to search 
    scanf("%d",&j);
     
    for(i=0;i<n;++i)
        if(arr[i]==j)
            break;
     
    if(i<n)
        printf("Element found at index %d",i); //If true Print the element found at index.
    else
        printf("Element not found"); //If False Print "Element not found"
  
    return 0;
} //End Of the main function body 