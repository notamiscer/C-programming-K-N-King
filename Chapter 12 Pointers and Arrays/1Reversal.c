#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write a program that reads a message, then prints the reversal
of the message.

Enter a message: Don't get mad, get even.
Reversal in: .even teg,dam teg t'noD

hint: Read the message one character at a time(using getchar)
and store the characters in an array. Stop reading when the
array is full or the character read is '\n'

(b) Revise the program to use a pointer instead of an integer
to keep track of the current position in the array.
*/

#define MAXINPUT 50

void reversal(char *array, int arraySize);


int main(int argc, char *argv[]) {
	char message[MAXINPUT];
	
	printf("Enter a message: ");
	fgets(message, MAXINPUT, stdin);

	printf("Reversal in: ");
	reversal(message, MAXINPUT);	
		printf("%s", message);

	return 0;
}

void reversal(char *array, int arraySize)
{
	char reversed[arraySize], tempChar;
	int counter, counter2;
	
	for(counter; counter < arraySize; counter++)
		if(array[counter] == '\n' )
			break;
				
	int middle = ((counter-1) / 2);
	if((counter-1) % 2 != 0)
		middle++;
	for(counter2 = 0, counter = counter-1;counter2 < middle; counter--,counter2++)
	{
		tempChar = array[counter2];
		array[counter2] = array[counter];
		array[counter] = tempChar;
	}
}
