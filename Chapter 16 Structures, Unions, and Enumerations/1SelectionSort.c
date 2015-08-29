#include <stdio.h>
#include "1SelectionSort.h"

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

void selection_sort(int intStorage[], int MAX)
{

	int highestNumber = 0;
	int counter, counting = 0, change;
	
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
	intStorage[change] = intStorage[MAX - 1];
	intStorage[MAX - 1] = highestNumber; 
	
	MAX--;
	if(MAX != 0)
	selection_sort(intStorage, MAX);
}

