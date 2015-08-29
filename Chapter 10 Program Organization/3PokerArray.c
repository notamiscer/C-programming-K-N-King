#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1
/*
3. Remove the num_in_rank, num_in_suit, and card_exists arrays from the poker.c program of section 10.5
Have the program store the cards in a 5 x 2 array instead. Each row of the array will represnt a card. For
example, if the array is named hand, then hand[0][0] will store the rank of the first card and hand[0][1] 
will store the suit of the first card.
*/

/* external variables */
int rankAndSuit[5][2];
bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
void read_cards(void);
void analyze_hand(void);
void print_result(void);
int checkCardRepeated(int a)
{
	int checker = 0, counter;
	
	for(counter = 0; counter < NUM_CARDS; counter++)
	{
		if(rankAndSuit[RANK][a] == rankAndSuit[RANK][counter] && rankAndSuit[SUIT][a] == rankAndSuit[SUIT][counter])
		{
			printf("+\n");
			checker++;
		}
	}
	if(checker == 2) 
	{
	return 1;
	}
	else
	{ 
	return 0;
	}
	
}
/******************************************************************
* main: Calls read_cards, analyze_hand, and print_result          *
* 		repeatedly                                                *
******************************************************************/
int main(int argc, char *argv[]) {
	for(;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
	return 0;
}

/*******************************************************************
* read_cards: Reads the cards into the external                    *
*			  variables num_in_rank and num_in_suit;		       *
*             checks for bad cars and duplicate cards              *
*******************************************************************/
void read_cards(void)
{
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cardCounter = 0;
	int repeatedCard;
	for(; cardCounter < NUM_CARDS; cardCounter++)
	{
		repeatedCard = 1;
	while(repeatedCard == 1)
	{	
	
		printf("Enter a card #%d: ", cardCounter+1);
		rank_ch = getchar();
		
		bad_card = false;
		switch(rank_ch)
		{
			case '0':				exit(EXIT_SUCCESS);
			case '2':               rank = 0; break; 
			case '3':               rank = 1; break;
			case '4':               rank = 2; break; 
			case '5':               rank = 3; break;
			case '6':               rank = 4; break;
			case '7':               rank = 5; break;
			case '8':               rank = 6; break;
			case '9':               rank = 7; break;
			case 't': case 'T':     rank = 8; break;
			case 'j': case 'J':     rank = 9; break;
			case 'q': case 'Q':     rank = 10; break;
			case 'k': case 'K':     rank = 11; break;
			case 'a': case 'A':     rank = 12; break;
			default:				bad_card = true;
		}
		
		suit_ch = getchar();
		switch(suit_ch)
		{
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default:			bad_card = true;	
		}
		rankAndSuit[cardCounter][RANK] = rank;
		rankAndSuit[cardCounter][SUIT] = suit;
		repeatedCard = checkCardRepeated(cardCounter);
		if(repeatedCard == 1 || bad_card == true)
			printf("Invalid Card\n");
		if(bad_card == true)
			repeatedCard = 1;
		fseek(stdin,0,SEEK_END);		
	}
	}
	
}

/**************************************************************
* analyze_hand: Determines whether the hand contains a        *
*				straight, a flush, four-of-a-kind,            *
*				and/or three-of-a-kind; determines the	      *
*				number of pairs; stores the results into      *
*				external variables straight, flush,           *
*				four, three, and pairs.                       *
**************************************************************/
void analyze_hand(void)
{
	int num_consec = 0;
	int rank, suit;
	
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;
	/* check for flush */
	for(suit = 0; suit < NUM_SUITS; suit++)
		if(rankAndSuit[SUIT][suit] == NUM_CARDS)
			flush = true;
	
	/* check for straight */
	rank = 0;
	while(rankAndSuit[RANK][rank] == 0) rank++;
	for(;rank < NUM_RANKS && rankAndSuit[RANK][rank] > 0; rank++)
		num_consec++;
	if(num_consec == NUM_CARDS)
	{
		straight = true;
		return;	
	}	
	
	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for(rank = 0; rank < NUM_RANKS; rank++)
	{
		if(rankAndSuit[RANK][rank] == 4) four = true;
		if(rankAndSuit[RANK][rank] == 3) three = true;
		if(rankAndSuit[RANK][rank] == 2) pairs++;	
	}		
}

/*************************************************************
* print_result: Prints the classification of the hand,       *
*				based on the values of the external          *
*				variables straight, flush, four, three,      *
*				and pairs.                                   *
*************************************************************/
void print_result(void)
{
	if(straight && flush) printf("Straight flush");
	else if(four) 		  printf("Four of a kind");
	else if(three && 
			pairs == 1)   printf("Full house");
	else if(flush) 		  printf("Flush");
	else if(straight)	  printf("Straight");
	else if(three)		  printf("Three of a kind");
	else if(pairs == 2)   printf("Two pairs");
	else if(pairs == 1)   printf("Pair");
	else				  printf("High card");
	
	printf("\n\n");		
}
