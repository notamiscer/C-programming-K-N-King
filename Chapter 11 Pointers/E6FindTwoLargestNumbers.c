#include <stdio.h>
#include <stdlib.h>

/* 
Void find_two_largest(int a[], int n, int *largest, int *second_largest);

When passed an array a of length n, the function will search a for its largest and second largest
elements, storing them in the variables pointed to by largest and second_largest, resoectively.
*/
#define TEN 10

/*
void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
  int i;

  if (a[0] > a[1]) {
    *largest = a[0];
    *second_largest = a[1];
  } else {
    *largest = a[1];
    *second_largest = a[0];
  }

  for (i = 2; i < n; i++)
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] > *second_largest)
      *second_largest = a[i];
}
*/

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	int i, temp;
	
	*largest = a[0] > a[1] ? a[0] : a[1];
	*second_largest = a[0] == *largest ? a[1] : a[0];
	
	 for (i = 2; i < n; i++)
	 {
    	if (a[i] > *largest) 
		{
      	*second_largest = *largest;
      	*largest = a[i];
    	}
		else if (a[i] > *second_largest)
      	*second_largest = a[i];
	}
}

int main(int argc, char *argv[]) {

	int tenNumbers[TEN] = {9,5,97,100,21,15,18,19,50,98};
	int *largest, *second_largest;
find_two_largest(tenNumbers, TEN, &largest, &second_largest);

printf("Largest = %d, Second Largest = %d", largest, second_largest);

	
	return 0;
}
