#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter numerical grade: 84
Letter grade: B
*/
int main(int argc, char *argv[]) {
	int grade, numGrade;
	
	printf("Enter numerical grade: ");
	scanf("%d", &numGrade);
	
	printf("Letter grade: ");
		grade = numGrade/10;
	if(numGrade > 100 || numGrade < 0)
		grade = 11;	
		
	switch(grade) 
	{
		case 10:
		case 9:printf("A");
				break;
		case 8:printf("B");	
				break;
		case 7:printf("C");
				break;
		case 6:printf("D");	
				break;	
		case 5: case 4: case3: case 2: case 1: 
		case 0:printf("F");
				break;
		default:printf("Error");
				break;					
	}
		
	return 0;
}
