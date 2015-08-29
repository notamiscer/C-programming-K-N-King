#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that finds the "smallest" and "largest" in a 
series of words. After the user enters the words, the program will 
determine which words would come first and last if the words were
listed in dictionary order. The program must stop accepting input 
when the user enters a four-letter word. Assume that no word is
more than 20 letters long. An interactive session with the program
might look like this:

Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish

Smallest word: cat
Largest word: zebra

Hint: Use two strings named smallest_word and largest_word to keep track
of the "smallest" and "largest" words entered so far. Each time the user
enters a new word, use strcmp to compare it with smallest_word; if 
the new word is smaller "smaller" use strcpy to save it in smallest_word.
Do a similar comparison with largest_word. Use strlen to determine
when the user has entered a four-letter word. */
#define MAXARRSIZE 20

int main(int argc, char *argv[]) {
	
	char smallestWord[MAXARRSIZE], largestWord[MAXARRSIZE];
	char inputWord[MAXARRSIZE];
	int counter = 0;
	do
	{
		printf("Enter word: ");
		scanf("%s", inputWord);
		
		if(counter == 0)
		{
			strcpy(smallestWord, inputWord);	
			strcpy(largestWord, inputWord);
		}
			
		if(strcmp(inputWord, smallestWord) < 0)	
			strcpy(smallestWord, inputWord);
		if(strcmp(inputWord, largestWord) > 0)
			strcpy(largestWord, inputWord);

		if(counter < 1)
		counter++;
		
	}while(strlen(inputWord) != 4);
	
	printf("\nThe largest Word: %s\nThe Smallest Word: %s\n"
	, largestWord, smallestWord);
	

	return 0;
}
