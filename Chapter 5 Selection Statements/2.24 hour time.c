#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM
*/
int main(int argc, char *argv[]) {
	int inputHours, inputMinutes, hoursConverted;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &inputHours, &inputMinutes);
	
	if(inputHours < 12 || inputHours == 24)
		{
		hoursConverted = inputHours;
		if(inputHours = 24)
			hoursConverted = 12;
		printf("Equivalent 12-hour time: %d:%.2d AM ", hoursConverted, inputMinutes);
		}
	else
		{
		hoursConverted = inputHours - 12;
		if(inputHours = 12)
			hoursConverted = 12;
		printf("Equivalent 12-hour time: %d:%.2d PM ", hoursConverted, inputMinutes);
		}
	
	
	return 0;
}
