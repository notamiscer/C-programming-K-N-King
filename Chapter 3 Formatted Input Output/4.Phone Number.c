#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter phone number [(xxx) xxx-xxxx] : (404) 817-6900
You entered 404.817.6900
*/
int main(int argc, char *argv[]) {
	int areaCode, prefix, lineNumber;
	
	printf("Enter phone number [(xxx) xxx-xxxx] : ");
	scanf("(%d) %d-%d", &areaCode, &prefix, &lineNumber);
	printf("You entered %d.%d.%d", areaCode, prefix, lineNumber);
	return 0;
}
