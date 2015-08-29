#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define N 10

int main(int argc, char *argv[]) {
	int a[N], *p;
	
	printf("Enter %d numbers: ", N);
	for(p = a; p < a + N; p++)
		scanf("%d", p);
		
	printf("In reverse order:");
	for(p = a + N - 1; p >= a; p--)
		printf(" %d", *p);
	printf("\n");	
	
	
	return 0;
}
