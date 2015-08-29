#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write a function digit(n, k) that returns the kth digit(from the right) in n (a positive integer)
For example, digit(829 , 1) returns 9 digit(829, 2) returns 2, and digit(829, 3) returns 8.
If k is greater than the number of digits in n, have the function return 0
*/

int digit(int n, int k)
{
	int counter, divider = 1, answer, checker;
	
	for(counter = 0; counter < k; counter++)
	{
		divider *= 10;
	}
	if(divider/10 > n) return 0;
	answer = n % divider;
	divider = 1;
		for(counter = 0; counter < k - 1; counter++)
	{
		divider *= 10;
	}
	answer = answer / divider;
	
	
	return answer;
}


int main(int argc, char *argv[]) {
	int n = 8290, k = 4;
	printf("%d", digit(n, k));
	
	return 0;
}
