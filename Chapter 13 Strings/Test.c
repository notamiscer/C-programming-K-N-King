#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while((ch = getchar()) != '\n')
	{	
		if(i < n)
			str[i++] = ch;
	}
	str[i] = '\0'; /*terminates string*/
	return i;	/*number of characters stored*/	
}

int count_spaces(const char s[])
{
	int count = 0, i;
	
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ')
			count++;
	}
	return count;
}

int countSpaces(const char *s) //using pointer instead of integer
{                             //to keep track of array
	int count = 0;
	
	for(;*s != '\0'; s++)
	{
		if(*s == ' ')
			count++;
	}
	return count;
}

int main(int argc, char *argv[]) {
	
	
	return 0;
}
