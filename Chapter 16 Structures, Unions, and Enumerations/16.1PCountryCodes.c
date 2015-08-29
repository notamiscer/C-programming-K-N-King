/* 1.Write a program that asks the user to enter an international dialing code and then look it up in
the country_codes array(see Section 16.3). If it finds the code, the program should
display the name of the corresponding country; if not, the program should print an error message. */

#include <stdio.h>
#include <stdlib.h>

#define COUNTRIES 32

struct dialing_code {
	char *country;
	int code;
};

const struct dialing_code country_codes[COUNTRIES] =
{
	{"Argentina", 		     54}, {"Bangladesh", 	 880},
	{"Brazil", 				 55}, {"Burma (Myanmar)", 95},
	{"China", 				 86}, {"Colombia", 		  57},
	{"Congo, Dem. Rep. of", 243}, {"Egypt", 		  20},
	{"Ethiopia", 			251}, {"France", 		  33},
	{"Germany", 			 49}, {"India", 		  91},
	{"Indonesia", 			 62}, {"Iran", 			  98},
	{"Italy", 				 39}, {"Japan", 		  81},
	{"Mexico", 				 52}, {"Nigeria", 		 234},
	{"Pakistan", 			 92}, {"Philippines", 	  63},
	{"Poland", 				 48}, {"Russia", 		   7},
	{"South Africa", 		 27}, {"South Korea", 	  82},
	{"Spain", 				 34}, {"Sudan", 		 249},
	{"Thailand", 			 66}, {"Turkey", 		  90},
	{"Ukraine", 			380}, {"United Kingdom",  44},
	{"United States", 		  1}, {"Vietnam",     	  84},
};

void print_country_codes(int country_code);

int main(int argc, char *argv[]) {
	int input_code;
	
	printf("Enter an International dialing code\n");
	scanf("%d", &input_code);
	print_country_codes(input_code);
	
	return 0;
}

void print_country_codes(int country_code)
{
	int counter;
		for(counter = 0; counter < COUNTRIES; counter++)
		{
			if(country_codes[counter].code == country_code)
				break;
		}

	if(counter != COUNTRIES)
		printf("International Dialing Code of %s : %d", country_codes[counter].country, country_codes[counter].code);
	else
		printf("Country code %d not found", country_code);


}












