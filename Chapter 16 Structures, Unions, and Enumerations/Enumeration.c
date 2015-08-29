/* define the tag suit *//* declaring suit variables */
enum suit{CLUBS, DIAMONDS, HEARTS, SPADES};
enum suit s1, s2;

/* or we could use typedef to make Suit a type name: */
typedef enum{CLUBS, DIAMONDS, HEARTS, SPADES} Suit;
Suit s1, s2;

/* Enumerations as Integers */
enum suit{CLUBS = 1, DIAMONDS = 2, HEARTS = 3, SPADES = 4};
enum dept{RESEARCH = 20, PRODUCTION = 10, SALES = 25};

/* Mix with ordinary integers */
int i;
enum{CLUBS, DIAMONDS, HEARTS, SPADES} s;

i = DIAMONDS; /* i is now 1 			*/
s = 0;        /* s is now 0 (CLUBS) 	*/
s++;          /* s is now 1 (DIAMONDS)  */
i = s + 2;    /* i is now 3				*/

/* Using Enumerations to Declare "Tag Fields" */
typedef struct{
	enum{INT_KIND, DOUBLE_KIND} kind;
	union{
		int i;
		double d;
	} u;
} Number;

/* Enumeration as subscripts */
enum weekdays{MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};
const char *daily_specials[] = {
[MONDAY] 	= "Beef ravioli",
[TUESDAY] 	= "BLTs",
[WEDNESDAY] = "Pizza",
[THURSDAY]  = "Chicken fajitas"
[FRIDAY] 	= "Macaroni and cheese"
};














































