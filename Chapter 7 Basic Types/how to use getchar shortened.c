#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int len = 0;
	
	printf("Enter a message: ");
	while(getchar() != '\n')
		len++;
	printf("Your message was %d characters long\n", len);
	
	return 0;
}
