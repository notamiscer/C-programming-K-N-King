#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float dollarInput;
	float taxrate = .05;

	printf("Enter an amount:");
	scanf("%f",&dollarInput);
	printf("\nWith tax added: $%.2f",(dollarInput * taxrate) + dollarInput);
	
	return 0;
}
