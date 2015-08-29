#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int randomNum;
	int counter;
	randomNum = rand() % 50+1;
	printf("Random number is\n");
	srand(time(0));	
	for(counter = 0; counter < 10; counter++)
	{
	randomNum = rand() %4+1;
	printf("%d\n", randomNum);
	}
	
	
	return 0;
}
