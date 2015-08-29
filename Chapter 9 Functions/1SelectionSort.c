#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write a program that asks the user to enter a series of integers
(which it stores in an array), then sorts the integers by calling
the function selection_sort. When given an array with n elements
, selection_sort must do the following:
1. Search the array to find the largest element, then move it to 
the last position in the array.
2.Call itself recursively to sort the first n - 1 elements of the 
array
*/

void storeIntInArray(int intStorage[], int MAX);

void selection_sort(int intStorage[], int MAX);



int main(int argc, char *argv[]) {
	int MAX = 2;
	int intStorage[MAX];
	int counter;
	storeIntInArray(intStorage,MAX);
	selection_sort(intStorage, MAX);
	
	printf("In order\n");
	for(counter = 0; counter < MAX; counter++)
	{
		printf("%d ", intStorage[counter]);
	}

	return 0;
}

void selection_sort(int intStorage[], int MAX)
{

	int highestNumber = 0;
	int counter, counting = 0, change;
	printf("max is %d\n", MAX);
	
	for(counter = 0; counter < MAX; counter++)
	{
		if(MAX == 0)
			break;
			
	 if(highestNumber < intStorage[counter])
	{
	 	highestNumber = intStorage[counter];
	 	change = counter;
	}
	 
	}
	printf("counter is at %d\n" ,counter); //debugging
	intStorage[change] = intStorage[MAX - 1];
	intStorage[MAX - 1] = highestNumber; 
	
	MAX--;
	if(MAX != 0)
	selection_sort(intStorage, MAX);
}


void storeIntInArray(int intStorage[], int MAX)
{
	int counter;
	
	printf("Enter %d integers\n", MAX);
	for(counter = 0; counter < MAX; counter++)
		scanf("%d", &intStorage[counter]);
}
