#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
4
16
36
64
100
*/
int main(int argc, char *argv[]) {
	int inputMax, counter, evenSquares;
	printf("Enter max number of even square: ");
	scanf("%d", &inputMax);
	for(counter = 2;; counter = counter + 2)
	{
		evenSquares = counter * counter;
		if(evenSquares > inputMax)
			break;
		printf("%d\n",evenSquares);	
	}
	return 0;
}
