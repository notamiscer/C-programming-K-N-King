#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24
*/
int main(int argc, char *argv[]) {
	int sumNumerator, sumDenominator, numeratorOne, numeratorTwo, denominatorOne, denominatorTwo;
	
	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d + %d/%d", &numeratorOne, &denominatorOne, &numeratorTwo, &denominatorTwo);
	
	sumNumerator = (numeratorOne * denominatorTwo) + (numeratorTwo * denominatorOne);
	sumDenominator = denominatorOne * denominatorTwo;
	
	printf("The sum is %d/%d", sumNumerator, sumDenominator);
	return 0;
}
