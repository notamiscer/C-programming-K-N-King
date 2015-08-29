#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	
	printf("How many numbers do you want to reverse? ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter %d numbers: ", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
		
	printf("In reverse order: ");
	for(i = n -1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");	
	
	return 0;
}
