#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a number between 0 and 32767: 1953
In octal, your number is: 03641
*/
int main(int argc, char *argv[]) {
	int inputInteger, firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &inputInteger);
	
	fifthDigit = inputInteger%8;
	fourthDigit = (inputInteger/8) % 8;
	thirdDigit = ((inputInteger/8) / 8) % 8;
	secondDigit = (((inputInteger/8) / 8) / 8) % 8;
	firstDigit = ((((inputInteger/8) / 8) / 8) / 8) % 8;
	
	printf("In octal, your number is: %d%d%d%d%d", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);
	return 0;
}
