#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
face value:
1 AEILNORSTU 
2 DG
3 BCMP
4 FHVWY
5 K

Enter a word: pitfall
Scrabble value: 12
*/
int main(int argc, char *argv[]) {
	char scrabbleLetter;
	int scabbleValue = 0;
	
	printf("Enter a word: ");
	while(scrabbleLetter != '\n')
	{
	scrabbleLetter = getchar();	
	scrabbleLetter = toupper(scrabbleLetter);	
	
	switch(scrabbleLetter)
		{
		case 'A':case 'E': case 'I': case 'L':	
		case 'N':case 'O': case 'R': case 'S':
		case 'T':case 'U': 
		scabbleValue += 1;
		break;
		
		case 'D':case 'G':
		scabbleValue += 2;
		break;			
		
		case 'B':case 'C': case 'M': case 'P':	
		scabbleValue += 3;
		break;	
		
		case 'F':case 'H': case 'V': case 'W': case 'Y':
		scabbleValue += 4;
		break;
		
		case 'K':
		scabbleValue += 5;
		break;		
		
		default:
		break;	
		}	
	}
	
	printf("Scrabble value = %d", scabbleValue);
	
	
	
	
	return 0;
}
