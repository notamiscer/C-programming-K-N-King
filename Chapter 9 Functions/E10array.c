#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write functions that return the following values.(Assume that a and n are parameters
where a is an array of int value and n is the length of array.)
a. The largest element in a
b. The average of all elements in a.
c. The number of positive elements in a
*/

int * arrayFind(int a[], int n)
{
	int counter, answer[3];
	int highestNumber = a[0], average, positive;
	for(counter = 0; counter < n; counter++)
	{
	highestNumber = highestNumber > a[counter] ? highestNumber : a[counter];
	average += a[counter];
	if(a[counter] > 0) ++positive;
	}
	a[0] = highestNumber;
	a[1] = average / n;
	a[2] = positive;
			
	return a;
}

int main(int argc, char *argv[]) {
	int arrSize = 5, poo[3];
	int intArray[arrSize] = {5, -5, 1, 6, 7};
	
	poo = arrayFind(intArray[], arrSize);
	printf("a = %d, b = %d, c = %d", a[0], a[1], a[2]);
	
	return 0;
}
