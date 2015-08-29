#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bool digit_seen[10] = {false};
	int digit, counter = 0;
	int repeatedDigit[10];
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while(n > 0)
	{
		digit = n % 10;
		if(digit_seen[digit])
		{
			repeatedDigit[counter] = digit;
			++counter;
			digit_seen[digit] = true;
		}	
		digit_seen[digit] = true;
		n /= 10;
	}
	
	if(counter > 0)
	{
		int counter1;
		printf("Repeated digit(s): ");
		for(counter1 = 0; counter1 < counter; ++counter1)
			printf("%d ", repeatedDigit[counter1]);
	}
	else
		printf("No repeated digit\n");
	
	
	return 0;
}
