//Author: Anikait Singh
//Creation date: 28 Mar,2021
//Purpose: Sorting an array using insertion sort.

#include<stdio.h>
int main(){
	int n, i, j, temp = 0; //Integer variables and array declaration.
	printf("Enter the size of an array: ");
	scanf("%d",&n);

	int arr[n];  //Array decleration.
	printf("Enter the elements for an array: " );
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	 //Sort the array in ascending order    
    for (int i = 0; i < n; i++) {     
        for (int j = i+1; j < n; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
        
    //Displaying elements of array after sorting    
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < n; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}