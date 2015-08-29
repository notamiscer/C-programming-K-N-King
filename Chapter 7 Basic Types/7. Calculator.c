#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char equation, result, poop;
	double firstNumber, secondNumber,answer;
	printf("Enter an equation(1+1)");
	while(equation = getchar() != '\n')
	{
		if(equation == '+' || equation == '-')
			break;	
	}	
		
	scanf("%lf %lf", &firstNumber, &secondNumber);
	
	switch(equation)
	{
	case '+':
		answer = firstNumber + secondNumber;
		result = "sum";
		break;	
	case '-':
		answer = firstNumber - secondNumber;
		result = "difference";
		break;
	case '*':
		answer = firstNumber * secondNumber;
		result = "product";
		break;
	case '/':
		answer = firstNumber / secondNumber;
		result = "quotient";
		break;	
	default: break;	
	}
	printf("The %c is %d", result, answer);
		
	
	return 0;
}
