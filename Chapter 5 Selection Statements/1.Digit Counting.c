#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a number: 374
The number 374 has 3 digits
*/
int main(int argc, char *argv[]) {
	int inputDigit, digitCounter;
	
	printf("Enter a number: ");
	scanf("%d", &inputDigit);
	
	if(inputDigit > 9)
		if(inputDigit > 99)
			digitCounter = 3;
		else
			digitCounter = 2;
	else
		digitCounter = 1;
		
	printf("The number %d has %d digits", inputDigit, digitCounter);		
	
	return 0;
}
