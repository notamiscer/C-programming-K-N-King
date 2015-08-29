#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 5

int main(int argc, char *argv[]) {
	int integerRow5x5[MAX][MAX] = {0}, totalIntegerRow5x5[2][MAX] = {0};
	int counter, inputCounter, rowCounter, columnCounter, displayColumnCounter, displayCounter;
	for(counter = 0; counter < MAX ; ++counter)
	{
		printf("Enter row %d: ", counter+1);
		for(inputCounter = 0; inputCounter < MAX; ++inputCounter)
		{
			scanf("%d", &integerRow5x5[counter][inputCounter]);
		}		
	}
	
		for(counter = 0; counter < MAX ; ++counter)
	{	
		for(rowCounter = 0; rowCounter < MAX; ++rowCounter)
		{
			totalIntegerRow5x5[0][counter] += integerRow5x5[counter][rowCounter];
		}
		for(columnCounter = 0; columnCounter < MAX; ++columnCounter)
		{
			totalIntegerRow5x5[1][counter] += integerRow5x5[columnCounter][counter];
		}		
	}
	
	for(displayColumnCounter = 0; displayColumnCounter < 2;)
	{
		if(displayColumnCounter == 0)
		{
			printf("Total Row: ");
		}
		else if(displayColumnCounter == 1)
		{
			printf("Total Column: ");
		}
		
		for(displayCounter = 0; displayCounter < MAX; ++displayCounter)
		{
			printf("%d ", totalIntegerRow5x5[displayColumnCounter][displayCounter]);
		}
		printf("\n");
		++displayColumnCounter;
	}
	return 0;
}
