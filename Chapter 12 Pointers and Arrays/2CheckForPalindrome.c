#include <stdio.h>
#include <stdlib.h>

#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
(a) Write a program that reads a message, then checks whether it's a palindrome
(the letters in the message are the same from left to right as from right to left)

Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome

Ignore all characters that aren't letters. Use integer variables
to keep track of positions in the array

(b) Revise the program to use pointers instead of integers to keep track
of positions in the array.
*/
#define MAXINPUT 30

int checkForPalindrome(char *message, int arraySize);


int main(int argc, char *argv[]) {
	char inputMessage[MAXINPUT] = "He lived as a devil, eh?";
	printf("Enter a message:");
	//fgets(inputMessage, MAXINPUT, stdin);
	
	if(checkForPalindrome(inputMessage, MAXINPUT))
		printf("Palindrome");
	else
		printf("Not a palindrome");
	
	return 0;
}

int checkForPalindrome(char *message, int arraySize)
{
	int isPalindrome;
	int counter, counter2;
	
	for(counter = 0;counter < arraySize && message[counter] != '\0'; counter++)
	{
		if(isalpha(message[counter]) && isupper(message[counter]))
			message[counter] = tolower(message[counter]);
	}
	
	
	counter = counter - 1;
	printf("counter is at %d", counter);
	
	for(counter2 = 0; counter != counter2; counter2++, counter--)
	{
		while(isalpha(message[counter]) == 0 || isalpha(message[counter]) == 0)
		{
			if(isalpha(message[counter]) == 0) 
				counter--;
			if(isalpha(message[counter2]) == 0) 
				counter2++;
		}
		printf("\ncomparing %c = %c ", message[counter], message[counter2]);

		
		if(message[counter] != message[counter2])
			return isPalindrome = 0;
		
		if(counter == counter2)
			return isPalindrome = 1;
	}
}






