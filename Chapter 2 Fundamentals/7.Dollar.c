#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter a dollar amount: 93

$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3 
*/

int main(int argc, char *argv[]) {
	int dollarInput, twentyBill, tenBill, fiveBill, oneBill;
	
		
	printf("Enter a dollar amount: ");
	scanf("%d",&dollarInput);
	
	twentyBill = dollarInput / 20;
	tenBill =  (dollarInput % 20) / 10;
	fiveBill = ((dollarInput % 20) % 10) / 5;
	oneBill = (((dollarInput % 20) % 10) % 5) / 1;
	
	printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n",twentyBill, tenBill, fiveBill, oneBill);
	
	
	
	return 0;
}
