#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
returns 1 if x y fall between 0 and n - 1 inclusive
*/

int check(x, y, n);
int main(int argc, char *argv[]) {
	int x, y, n;
	
	printf("Enter x, y and max\n");
	scanf("%d %d %d", &x, &y, &n);
	
	printf("check returned %d", check(x, y,n));
	
	return 0;
}

check(x, y, n)
{
	return (x > 0 && x < n - 1) && (y > 0 && y < n - 1);
}
