#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Speed(knots)	Description
Less than 1		Calm
1-3				Light air
4-27			Breeze
28-47			Gale
48-63			Storm	
Above 63		Hurricane
*/
int main(int argc, char *argv[]) {
	int knots, description;
	
	printf("Enter the Speed(knots): ");
	scanf("%d", &knots);
	
	printf("Description: ");
	
	if(knots < 1)
		printf("Calm");
	if(knots > 1 && knots <= 3)
		printf("Light air");
	if(knots > 4 && knots <= 27)
		printf("Breeze");	
	if(knots > 28 && knots <= 47)
		printf("Gale");
	if(knots > 48 && knots <= 63)
		printf("Storm");
	if(knots > 63) 
		printf("Hurricane");			
	
	return 0;
}
