#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71 
*/
int main(int argc, char *argv[]) {
	float loan, interestRate, monthlyPayment;
	float firstPayment, secondPayment, thirdPayment;
	
	printf("Enter amount of loan: ");
	scanf("%f",&loan);
	printf("Enter interest rate: ");
	scanf("%f",&interestRate);
	printf("Enter monthly payment: ");
	scanf("%f",&monthlyPayment);
	
	firstPayment = (loan - monthlyPayment) + loan * (interestRate / 1200); 
	secondPayment = (firstPayment - monthlyPayment) + firstPayment * (interestRate / 1200);
	thirdPayment = (secondPayment - monthlyPayment) + secondPayment * (interestRate / 1200);
	
	printf("\nBalance remaining after first payment: %.2f",firstPayment);
	printf("\nBalance remaining after second payment: %.2f",secondPayment);
	printf("\nBalance remaining after third payment: %.2f",thirdPayment);
	
	return 0;
}
