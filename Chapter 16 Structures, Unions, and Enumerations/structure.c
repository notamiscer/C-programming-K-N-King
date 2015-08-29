/* Nested Structures */
struct person_name {
	char first[FIRST_NAME_LEN+1];
	char middle_initial;
	char last[LAST_NAME_LEN+1];
};

/* person_name structure as part of a larger structure */
struct student{
	struct person_name name;
	int id, age;
	char sex;
} student1, student2;

/* Accessing student1's first name, middle initial or last name */
strcpy(student1.name.first, "Fred");

/* Passing arguements */
display_name(student1.name);

/* Copying name */
struct person_name new_name;
...
student1.name = new_name;

/* Array of structures */
struct part inventory[100];
/* Access */
print_part(inventory[i]);
inventory[i].number = 883;
/* To change name stored in inventory[i] to an empty string */
inventory[i].name[0] = '\0';

/* Initializing an Array of Structures */
struct dialing_code {
	char *country;
	int code;
};

const struct dialing_code country_codes[] =
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

struct {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
} part1 = {528, "Disk Drive", 10},
  part2 = {914, "Printer cable", 5};






























