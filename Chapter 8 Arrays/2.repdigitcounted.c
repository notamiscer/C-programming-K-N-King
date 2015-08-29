#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bool digit_seen[10] = {0,1,2,3,4,5,6,7,8,9};
	int digitRepeat[2][10] = 
		{
		{0,1,2,3,4,5,6,7,8,9},
		{0}
		};
	int digit, numberdigit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	if(n == 0)
		digitRepeat[1][n] += 1;

	
	while(n > 0)
	{
		digit = n % 10;
		if(digit == 0)
			{
			digitRepeat[1][digit] += 1;
			}

		if(digit_seen[digit] && digit != 0)
			{
				digitRepeat[1][digit] += 1;
			}
			
		digit_seen[digit] = true;
		n /= 10;
	}
	int counter;
	printf("Digit:      ");
		for(counter = 0; counter < 10;++counter)
	{
		printf("%d ", digitRepeat[0][counter]);
	}
	printf("\nOccurrences:");
	for(counter = 0; counter < 10;++counter)
	{
		printf("%d ", digitRepeat[1][counter]);
	}
	
	
	return 0;
}
