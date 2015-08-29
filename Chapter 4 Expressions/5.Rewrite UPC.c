#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int upc1, upc2, upc3, upc4, upc5, upc6, upc7, upc8, upc9, upc10, upc11, checkDigit;
	int firstSum, secondSum;
	
	printf("Enter the first 11 digits of UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &upc1, &upc2, &upc3, &upc4, &upc5, &upc6, &upc7, &upc8, &upc9, &upc10, &upc11);
	
	secondSum = upc2 + upc4 + upc6 + upc8 + upc10;
	firstSum = ((upc1 + upc3 + upc5 + upc7 + upc9 + upc11) * 3) + secondSum - 1;
	checkDigit = 9 - (firstSum % 10);
	
	printf("Check Digit: %d", checkDigit);
	
	return 0;
}
