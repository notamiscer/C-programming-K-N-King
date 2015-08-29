#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a three-digit number: 123
The reversal is: 321
*/
int main(int argc, char *argv[]) {
	int number;
	printf("Enter a three-digit number: ");
	scanf("%d", &number);
	
	printf("The reversal is: %d%d%d", (number%100)%10, (number%100)/10, number/100);
	return 0;
}
