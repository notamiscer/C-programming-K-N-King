#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Test whether a number is prime */

bool is_prime(int n)
{
	int divisor; 
	
	if(n <= 1)
		return false;
	for(divisor = 2; divisor * divisor <= n; divisor++)	
		if(n % divisor == 0)
			return false;
	return true;		
}

#define LEN 10

int sum_two_dimensional_array(int a[][LEN], int n)
{
	int i, j, sum = 0;
	
	for(i = 0; i < n; i++)
		for(j = 0; j < LEN; j++)
			sum += a[i][j]
}

int main(int argc, char *argv[]) {
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	if(is_prime(n))
		printf("Prime\n");
		else
		printf("Not prime\n");
	
	return 0;
}
