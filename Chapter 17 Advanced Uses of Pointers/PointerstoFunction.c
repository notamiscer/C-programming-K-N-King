/* Pointers to Functions */

/* a double parameter and return a double result, the prototype for integrate */
double integrate(double (*f)(double), double a, double b);
/* parentheses around *f indicate that f is a pointer to a function, not a function to that returns
a pointer. It's also legal to declare f as though it were a function */
double integrate(double f(double), double a, double b);

result = integrate(sin, 0.0, PI / 2);
/* Notice that there are no parentheses after sin. When a function name isn't followed by
parentheses, the C compiler produces a pointer to the function instead of generating code
for a function call. In our example, we're not calling sin; instead, were passing integrate
a pointer to sin.*/


/* qsort Function */
/* Comparison function
When given two pointers p and q o array elements, the comparison function must return
an integer that is negative if *p is "less than" *q, zero if *p is "equal to" *q, and 
positive if *p is "greater than" *q. */
/* qsort prototype */
void qsort(void *base, size_t nmemb, size_t size,
		   int (*compar)(const void *, const void *));
/* base must point to the first element in the array */
/* nmemb is the number of elements to be sorted(not necessarily the number of elements in the array) */		   
/* size is that size of each array element, measured in bytes */
/* compar is a pointer to the comparison function */
/* To sort the inventory array of Section 16.3, we'd use the following call of qsort: */
qsort(inventory, num_parts, sizeof(struct part), compare_parts);
/* Notice that the second argument is num_parts, not MAX_PARTS; we don't want to sort
the entire inventory array, just the portion in which parts are currently stored. */

/* Assuming that we want to sort the inventory array into ascending order by part number */
int compare_parts(const void *p, const void *q)
{
	const struct part *p1 = p;
	const struct part *q1 = q;
	
	if(p1->number < q1->number)
		return -1;
	else if(p1->number == q1->number)
		return 0;
	else
		return 1;
}
/* Most C programmers would write the function more concisely */
int compare_parts(const void *p, const void *q)
{
	if(((struct part *) p)->number <
	   ((struct part *) q)->number)
	 	return -1;
	else if(((struct part *) p)->number ==
		    ((struct part *) q)->number)
		return 0;
	else
		return 1;
}

/* Shorter version */
int compare_parts(const void *p, const void *q)
{
	return ((struct part *) p)->number -
		   ((struct part *) q)->number;
}
/* Subtracting q's part number from p's part number produces a negative result if p
has a smaller part number, zero if the part numbers are equal, and a positive result
if p has a larger part number. (Note that subtracting two integers is potentially
risky because of the danger of overflow. I'm assuming that part numbers are positive
integers, so that shouldn't happen here.) */

/* To sort the inventory array by part name instead of part number, we'd use the following
version of compare_parts: */
int compare_parts(const void *p, const void *q)
{
	return strcmp(((struct part *) p)->name,
				  ((struct part *) q)->name);
}


/* We can write functions that implement these commands, then store pointers to the functions
in an array: */
void (*file_cmd[])(void) = {new_cmd,
							open_cmd,
							close_cmd,
							close_all_cmd,
							save_cmd,
							save_as_cmd,
							save_all_cmd,
							print_cmd,
							exit_cmd
							};
/* If the user selects command n, where n falls between 0 and 8, we can subscript the
file_cmd array and call the corresponding function: */
(*file_cmd[n])(); /* or file_cmd[n](); */
/* we could get a similar effect with a switch statement. Using an array of function pointers
gives us more flexibility, however, since the elements of the array can be changed as
the program is running */


































































































































































