/*
1. Two Sum
Easy
Topics
Companies
Hint
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.


*/



#include <stdio.h>
#include <stdlib.h>

sort(int ptr[],int sum,int n){
	int arr_size = (n * sizeof(int))/sizeof(ptr[0]);
	int i = 0 ;
	while (i < arr_size){
		int j ;
		for(i=j+1;i<arr_size;i++){
			if(ptr[i]+ptr[j] == sum){
				
				printf("Index value of 1st element is %d and 2nd element is %d",j,i);
				
			}
		
	}
	i+=1;	
	}
	
}
	


int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i ,j,sum;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);
	
	

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			scanf("%d", &j);
			ptr[i] = j;
		}
		// Get the number of elements for the array
		printf("Enter the sum:");
		scanf("%d",&sum);
	
		
		sort(ptr,sum,n);
	}

	return 0;
}

