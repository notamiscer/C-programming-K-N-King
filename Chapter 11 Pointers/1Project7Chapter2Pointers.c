#include <stdio.h>
#include <stdlib.h>

/* void pay_amount(int dollars, int *twenties, int *tens,
int *fives, int *ones); 

The function determines the smallest number of $20, $10, $5
and $1 bills necessary to pay the amount represented by the dollars
parameter. The twenties parameter points to a variable in which
the function will store the number of $20 bills required. The 
tens, fives,and ones parameters are similar.*/

void pay_amount(int dollars, int *twenties, int *tens,
int *fives, int *ones);

int main(int argc, char *argv[]) {
	int dollarInput, twentyBill, tenBill, fiveBill, oneBill;
	printf("enter a dollar amount: ");
	scanf("%d", &dollarInput);
	pay_amount(dollarInput, &twentyBill, &tenBill, &fiveBill, &oneBill);
	
	printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",twentyBill, tenBill, fiveBill, oneBill);

	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens,
int *fives, int *ones)
{
	*twenties = dollars / 20;
	*tens =  (dollars % 20) / 10;
	*fives = ((dollars % 20) % 10) / 5;
	*ones = (((dollars % 20) % 10) % 5) / 1;
	
	
	
}
