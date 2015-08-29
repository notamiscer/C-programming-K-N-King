#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const int radius = 10;
	double spherevolume;
	const double PI = 3.141593;
	
	spherevolume = (4.0f/3.0f) * PI * (radius*radius*radius);
	printf("The volume of the Sphere is %f\n",spherevolume); 
	return 0;
}
