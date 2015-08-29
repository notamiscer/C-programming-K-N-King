#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter two integers: 12 28
Greatest common divisor: 4
*/
int main(int argc, char *argv[]) {
	int firstInteger, secondInteger, gcd, max;
	
	printf("Enter two integers: ");
	scanf("%d %d", &firstInteger, &secondInteger);
	max = firstInteger > secondInteger ? secondInteger : firstInteger;
	int counter, checker;
	for(counter = 2;counter < max;counter++) 
	{
		checker = firstInteger % counter; 
		if(checker == 0)
		{
			checker = secondInteger % counter;
			if(checker == 0)
			gcd = counter;
		}
	}
	if(gcd == 0)
	{
	printf("No Greatest common divisor");
	return 0;
	}
	printf("Greatest common divisor: %d", gcd);
	
	return 0;
}
