#include <stdio.h>
#include <stdlib.h>
//Square.c2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Prints a table of squares using a for statement
*/
/*
int = lowest number till error 46340 
short = 32767 short is shorter than int
long =  46340 int and long is the same 
*/
int main(int argc, char *argv[]) {
	long i;
	long n;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("%10ld%10ld\n", i, i*i);
		if(i < 0 || i*i < 0)
			break;
	}
	return 0;
}
