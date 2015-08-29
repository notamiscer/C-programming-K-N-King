/*
A union, like a structure, consists of one or more members, possibly of different
types. However, the compiler allocates only enough space for the largest of the
members, which overlay each other within this space. As a result, assigning a new
value to one member alters the values of the other members as well.
*/


union{
	int i;
	double d;
} u;

struct {
	int i;
	double d;
} s;

u.i = 82;
u.d = 74.8;

/* initialize the i member of u to 0 */
union{
	int i;
	double d;
} u = {0};

union{
	int i;
	double d;
} u = {.d = 10.0};

/* Using union to save space */
/* Structure ver. */
struct catalog_item{
	int stock_number;
	double price;
	int item_type;
	char title[TITLE_LEN+1];
	char author[AUTHOR_LEN+1];
	int num_pages;
	char design[DESIGN_LEN+1];
	int colors;
	int sizes;
};

/* Union ver*/
struct catalog_item{
	int stock_number;
	double price;
	int item_type;
	union{
		struct{
			char title[TITLE_LEN+1];
			char author[AUTHOR_LEN+1];
			int num_pages;
		} book;
		struct {
			char design[DESIGN_LEN+1];
		} mug;
		struct {
			char design[DESIGN_LEN+1];
			int colors;
			int sizes;
		} shirt;
	} item;
};

/* to access it */
printf("%s", c.item.book.title);
/* assign value */
strcpy(c.item.mug.design, "Cats");

printf("%s", c.item.shirt.design); /* prints "Cats" */


/* Using Unions to build Mixed Data Structures */
typedef union{
	int i;
	double d;
} Number;

Number number_array[1000];

number_array[0].i = 5;
number_array[1].d = 8.395;

/* Tag field */
#define INT_KIND 0
#define DOUBLE_KIND 1

typedef struct {
	int kind; /* tag field */
	union{
		int i;
		double d;
	} u;
} Number;

n.kind = INT_KIND;
n.u.i = 82;

void print_number(Number n)
{
	if(n.kind == INT_KIND)
		printf("%d", n.u.i);
	   	else/* %g will take a number that could be represented as %f (a simple float or double)
		    or %e (scientific notation) and return it as the shorter of the two.*/
	   	printf("%g", n.u.d);
}




































