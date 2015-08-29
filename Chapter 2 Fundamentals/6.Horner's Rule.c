#include <stdio.h>
#include <stdlib.h>
//uses Horner's Rule
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x, answer;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Enter an integer for x: ");
	scanf("%d",&x);
	
	answer = ((((3*x +2)*x -5)*x -1)*x +7)*x -6; 
	printf("\n3(%d)^5 + 2(%d)^4 - 5(%d)^3 - (%d)^2 + 7(%d) - 6 = %d",x,x,x,x,x,answer); 
	
	return 0;
}
