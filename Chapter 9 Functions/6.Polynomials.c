#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write a function that computes the value of the following polynomial:
3x^5 + 2X^4 - 5X^3 - x^2 + 7x - 6

Write a program that asks the user to enter a value for x, calls the function
to compute the value of the polynomial, and then displays the value 
returned by the function.
*/
int power(int x, int n);
int polynomial(int variable);

int main(int argc, char *argv[]) {
	int x;
	printf("Enter the value of x\n");
	scanf("%d", &x);
	printf("3(%d)^5 + 2(%d)^4 - 5(%d)^3 - (%d)^2 + 7(%d) - 6 = %d", x, x, x, x, x, polynomial(x));
	
	
	return 0;
}

int power(int x, int n)
{
	if(n == 0)
		return 1;
	else
		return x * power(x, n - 1);	
}

int polynomial(int x)
{
	int	answer = 3*power(x, 5) + 2*power(x, 4) - 5*power(x, 3) - power(x, 2) + 7*x - 6;
	return answer;
}
