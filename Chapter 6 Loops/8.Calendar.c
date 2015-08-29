#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Enter number of days in month: 31
Enter starting day of the week (1=Sun, 7=Sat): 3
S	M	T	W	TH	F	S
		1	2	3	4	5
6	7	8	9	10	11	12	
13	14	15	16	17	18	19
20	21	22	23	24	25	26
27	28	29	30	31		
*/
int main(int argc, char *argv[]) {
	int numberOfDays, startingDay, counter, counter2;
	
	printf("Enter number of days in month: ");
	scanf("%d", &numberOfDays);
	printf("Enter starting day of the week\n(1=Sun, 2=Mon, 3=Tue, 4=Wed, 5=Thur, 6=Fri, 7=Sat )");
	scanf("%d", &startingDay);
	printf("S	M	T	W	TH	F	S\n");
		switch(startingDay)
		{
		case 1:
			counter2 = 0;
			break;
		case 2:
			counter2 = 1;
			printf("\t");
			break;
		case 3:
			counter2 = 2;
			printf("\t\t");
			break;
		case 4:
			counter2 = 3;
			printf("\t\t\t");
			break;
		case 5:
			counter2 = 4;
			printf("\t\t\t\t");
			break;
		case 6:
			counter2 = 5;
			printf("\t\t\t\t\t");
			break;
		case 7:	
			counter2 = 6;
			printf("\t\t\t\t\t\t");
			break;
		default:
			break;
		}
		counter = 1;
	while(counter < numberOfDays)
	{
		
		for(;counter2 < 7;++counter2)
		{
			printf("%d\t", counter);
			++counter;	
			if(counter > numberOfDays)
				break;
		}
		printf("\n");
		counter2 = 0;	
	}
	
	return 0;
}
