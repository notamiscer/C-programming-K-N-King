#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 
Enter a date (mm/dd/yyyy) : 2/17/2011
You entered the date 20110217
*/
int main(int argc, char *argv[]) {
	int month, date, year;
	
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &month, &date, &year);
	
	printf("You entered the date %d%.2d%d", year, month, date);
	
	return 0;
}
