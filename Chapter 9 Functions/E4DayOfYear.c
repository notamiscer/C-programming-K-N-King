#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int day_of_year(int month, int day, int year);

int main(int argc, char *argv[]) {
	int year = 2014, day = 26, month = 1;
	
	printf("The day of the year %d", day_of_year(month, day, year));
	return 0;
}

int day_of_year(month, day, year)
{	
	int totalDays;
	totalDays = (month - 1) * 30;
	totalDays = totalDays + day;
	
	return totalDays;
}

