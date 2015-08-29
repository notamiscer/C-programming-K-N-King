#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
reverse void and null

null and void
*/
#define ARRSIZE 20

int InputSentence(char sentence[][ARRSIZE]);
void PrintSentence(char sentence[][ARRSIZE], int wordCount);

int main(int argc, char *argv[]) {
	char inputWords[ARRSIZE+1][ARRSIZE+1];
	int wordCount;
	
	wordCount = InputSentence(inputWords);
	PrintSentence(inputWords, wordCount);
	
		return 0;
	}
	
PrintSentence(char sentence[][ARRSIZE], int words)
{
	int counter;
	for(counter = words; counter >= 0 ; counter--)
	{
		printf("%s",sentence[counter]);
	}
}

	
InputSentence(char sentence[][ARRSIZE])
{
	char input;
	int words = 0, letters = 0;
	
	printf("Reverse: ");
	do
	{
		input = getchar();
		sentence[words][letters] = input;
		letters++;
		if(input == ' ')
		{
			sentence[words][letters] = '\0';
			words++;
			letters = 0;
		}
		if(letters >= ARRSIZE || words >= ARRSIZE)
			break;
	}
	while(input != '\n');
	/*replaces \n with \0*/
	sentence[words][letters-1] = ' ';
	sentence[words][letters] = '\0';

	return words;
}

