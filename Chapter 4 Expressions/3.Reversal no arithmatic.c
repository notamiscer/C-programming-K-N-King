#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hundreds, tens, ones;
	
	printf("\nEnter a three-digit number: ");
	scanf("%1d%1d%1d", &hundreds, &tens, &ones);
	
	printf("The reversal is: %d%d%d\n", ones, tens, hundreds);
	
	return 0;
}
