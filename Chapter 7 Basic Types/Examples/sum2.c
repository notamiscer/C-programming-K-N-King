#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long n, sum = 0;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	
	scanf("%ld", &n);
	while(n != 0)
	{
		sum += n;
		scanf("%ld", &n);
	}
	printf("The sum is: %ld\n", sum);
	
	return 0;
}
