#include <stdio.h>
#include <stdlib.h>

#define N 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void max_min(int a[], int n, int *max, int *min);

int main(int argc, char *argv[]) {
	int b[N], i, big, small;
	
	printf("Enter %d numbers: ", N);
	for(i = 0; i < N; i++)
		scanf("%d", &b[i]);
		
	max_min(b, N, &big, &small);
	
	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);
	
	return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
	int i;
	
	*max = *min = a[0];
	for(i = 1; i < n; i++)
	{
		if(a[i] > *max)
			*max = a[i];
		else if(a[i] < *min)
			*min = a[i];	
	}
}
