#include <stdio.h>
#include <stdlib.h>

/*Prints a table of compound interest*/
#define NUM_RATES ((int) ( sizeof(value) / sizeof(value[0])) )
#define INITIAL_BALANCE 100.00

int main(int argc, char *argv[]) {
	int i, low_rate, num_years, year;
	double value[5];
	
	printf("Enter interest rate: ");
	scanf("%d", &low_rate);
	printf("Enter number of years: ");
	scanf("%d", &num_years);
	
	printf("\nYears"); // ex low_rate = 5 5% 6% 7% 8% 9% 
	for(i = 0; i < NUM_RATES; i++)
	{
		printf("%6d%%", low_rate + i);
		value[i] = INITIAL_BALANCE; // assigns value[i] 100
	}
	printf("\n");
	
	for(year = 1; year <= num_years; year++)
	{
		printf("%3d	 ", year); //prints year
		for(i = 0; i < NUM_RATES; i++)
		{
			value[i] += (low_rate + i) / 100.0 * value[i]; // prints interest data for the row
			printf("%7.2f", value[i]);
		}
	printf("\n"); 
	}
	
	
	return 0;
}
