#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a two-digit number: 28
The reversal is: 82
*/
int main(int argc, char *argv[]) {
	int number;
	printf("Enter a two-digit number: ");
	scanf("%d", &number);
	
	printf("The reversal is: %d%d", number%10, number/10);
	return 0;
}
