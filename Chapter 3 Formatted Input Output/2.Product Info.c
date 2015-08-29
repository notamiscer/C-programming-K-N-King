#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item		Unit		Purchase
			Price		Date
583			$  13.50	10/24/2010				
*/
int main(int argc, char *argv[]) {
int itemNumber, month, date, year;
float unitPrice;

printf("Enter item number: ");
scanf("%d", &itemNumber);
printf("Enter unit price: ");
scanf("%f", &unitPrice);
printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%d/%d/%d", &month, &date, &year);

printf("\nItem\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate");
printf("\n%d\t\t$%7.2f\t%d/%d/%d", itemNumber, unitPrice, month, date, year);
	return 0;
}
