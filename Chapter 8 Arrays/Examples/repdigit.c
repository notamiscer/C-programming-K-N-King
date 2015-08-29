#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while(n > 0)
	{
		digit = n % 10;
		if(digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n /= 10;
	}
	
	if(n > 0)
		printf("Repeated digit\n");
	else
		printf("No repeated digit\n");
	
	return 0;
}
