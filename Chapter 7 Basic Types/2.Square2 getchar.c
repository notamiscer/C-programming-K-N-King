#include <stdio.h>
#include <stdlib.h>
//Square.c2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Prints a table of squares using a for statement
*/
/*
pause after every 24 square

Press Enter to continue...
Program should use getchar to read a character 
getchar wont allow program to continue until user press
enter key.
*/
int main(int argc, char *argv[]) {
	int i, n, counter;
	//char enter;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	fseek(stdin, 0, SEEK_END); //scanf doesnt clear buffer \n
	
	for(i = 0;i < n;)
	{
		counter = 0;
		for(;counter < 24; counter++)
		{
			i++;
			printf("%10d%10d\n", i, i*i);
			if(i >= n)
				break;
		}
	
		printf("\nPress Enter to continue...\n");	
		while(getchar() != '\n');
		
		
	}
	return 0;
}
