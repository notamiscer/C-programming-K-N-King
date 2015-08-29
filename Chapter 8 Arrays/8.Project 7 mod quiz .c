/*
Modify Programming project 7 so that it prompts for five quiz grades for each of five student,
then computes the total score and average score for each student, and the average score, high
score, and low score for each quiz.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 5

int main(int argc, char *argv[]) {
	int integerRow5x5[MAX][MAX] = {0}, totalIntegerRow5x5[MAX] = {0}, totalAverage, gradeHighAndLow[2][MAX], studentAverageGrade[MAX];
	int counter, inputCounter, rowCounter, columnCounter, counter1, lowestGrade, highestGrade;
	
	for(counter = 0; counter < MAX ; ++counter) // input
	{
		printf("Enter Student Grade(5 Quiz grades)#%d: ", counter+1);
		for(inputCounter = 0; inputCounter < MAX; ++inputCounter)
		{
			scanf("%d", &integerRow5x5[counter][inputCounter]);
		}		
	}
	
		for(counter = 0; counter < MAX ; ++counter)
	{	
		for(rowCounter = 0; rowCounter < MAX; ++rowCounter) // totals grades for one student
		{
			totalIntegerRow5x5[counter] += integerRow5x5[counter][rowCounter];
		}
		lowestGrade = 9999, highestGrade = -9999;
		for(columnCounter = 0; columnCounter < MAX; ++columnCounter) // finds lowest and highest grade
		{
			lowestGrade = integerRow5x5[columnCounter][counter] < lowestGrade ? integerRow5x5[columnCounter][counter] : lowestGrade;
			highestGrade = integerRow5x5[columnCounter][counter] > highestGrade ? integerRow5x5[columnCounter][counter] : highestGrade;
		}
		gradeHighAndLow[0][counter] = lowestGrade; // stores lowest and highest grade
		gradeHighAndLow[1][counter] = highestGrade;
		
		totalAverage += totalIntegerRow5x5[counter]; // totals grade for all students
	}
	
	for(counter = 0; counter < MAX; ++counter)
	{
		printf("\nThe total grade for student #%d: %d\n\t\tAverage grade: %.2lf\n", counter+1, totalIntegerRow5x5[counter], totalIntegerRow5x5[counter]/5.0);
	}
	
		printf("\n\nThe Average for the class is %.2lf\n", totalAverage / 25.0);
	for(counter = 0; counter < MAX; ++counter)
	{
		printf("\nQuiz %d\n", counter+1);
		printf("Lowest grade: %d", gradeHighAndLow[0][counter]);
		printf("\nHighest grade: %d\n", gradeHighAndLow[1][counter]);	
	}

	return 0;
}
