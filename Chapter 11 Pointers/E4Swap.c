#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *p, int *q)
{
int temp = *p;
*p = *q;
*q = temp;
}

int main(int argc, char *argv[]) {
	int a = 55, b = 44;
	int *i = &a, *j = &b;
	
	printf("a = %d, b = %d\n", *i, *j);
	swap(&i, &j);
	printf("a = %d, b = %d\n", *i, *j);

	return 0;
}
