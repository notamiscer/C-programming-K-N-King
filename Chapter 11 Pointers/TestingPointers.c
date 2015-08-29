#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//pass by arguement
void testMan(int *b, int *c);

int main(int argc, char *argv[]) {
	int a = 12;
	int c = &a;
	int b[2] = {5, 6};
	testMan(&b, &a);
	
	printf("\na = 12 = %d\n", a);

	return 0;
}

testMan(int *b, int *a)
{
	
	printf("\nb[1] = 6 = %d", b[1]);
	*a = 9; 
}
