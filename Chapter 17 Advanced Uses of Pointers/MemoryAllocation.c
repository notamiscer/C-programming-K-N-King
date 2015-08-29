/* To test if malloc return value is a null pointer */
p = malloc(10000);
if(p == NULL) {
	/* allocation failed; take appropriate action */
}
//or
if((p = malloc(10000)) == NULL) {
	/* allocation failed; take appropriate action */
}
//or
if(p)...
//or
if(p != NULL)...

/* malloc allocates a block of size bytes and returns a pointer to it. */
void *malloc(size_t size);
/* (sizeof(char)) == 1 */
p = malloc(n + 1);
p = (char *) malloc(n + 1);
/* when using malloc to allocate space for a string, don't forget to include
room for the null character */

/* calling strcpy is one way to initialize this array: */
strcpy(p, "abc");

/* measure lengths of the two strings to be concatenated */
char *concat(const char *s1, const char *s2)
{
	char *result;
	
	result = malloc(strlen(s1) + strlen(s2) + 1);
	if(result == NULL){
		printf("Error: malloc failed in concat\n");
		exit(EXIT_FAILURE); /* not always right action some program need to recover from memory
							   allocation failures and continue running */
	}
	strcpy(result, s1);
	strcat(result, s2);
	return result;
}

/* how concat function might be called */
p = concat("abc","def");
/* p will point to string "abcdef", stored dynamically allocated array 7 characters long
   including the null character */
/* Functions such as concat that dynamically allocate storage must be used with care.
When the string that concat returns is no longer needed, we'll want to call the free function
to release the space that the string occupies. If we dont the program may eventuall run out 
of memory */


/* Using malloc to Allocate Storage for an Array */
int *a;
a = malloc(n * sizeof(int));
/* once it points to a dynamically allocated block of memory, we can ignore the
fact that a is a pointer and use it instead as an array name */

void *calloc(size_t nmemb, size_t size);
/* calloc allocates space for an array with nmemb elements, each of which is
size bytes long; it reutrns a null pointer if the requested space isnt available.
After allocating the memory, calloc initializes it by setting all bits to 0.  */
a = calloc(n, sizeof(int));

/* by calling calloc with 1 as its first arguement, we can allocate space for a data item of any type */
struct point {
int x, y;
} *p;

p = calloc(1, sizeof(struct point));
/* p will point to a structure whose x and y members have been set to zero */


/* realloc Function */
/* reealloc function can resize the array to better suit our needs. */
void *realloc(void *ptr, size_t size);
/* ptr must point to a memory block obtained by a previous call of malloc, calloc or realloc
size parameter represents the new size of the block ,which may be larger or smaller than original size */
/* returns null pointer if data it cant enlarge the memory block */


/* Deallocating Storage */
/* malloc and the other memory allocation functions obtain memory blocks from a storage pool
known as the heap. Calling these functions too often or asking them for large blocks of memory
can exhaust the heap, causing the functions to return a null pointer

Program may allocate blocks of memory and then lose track of them, thereby wasting space.

p = malloc(...);
q = malloc(...);
p = q; */

/* A block of memory that's no longer accessible to a program is said to be garbage.
A program that leaves garbage behind has a memory leak. Some languages provide a garbage collector
that automatically locates and recycles garbage, but C doesnt. Instead, each C program is
responsible fo recycling its own garbage by calling the free function to release unneeded
memory */


/* Free function */
void free(void *ptr);

p = malloc(...);
q = malloc(...);
free(p);
p = q;

/* "Dangling Pointer" Problem */
/* free(p) deallocates the memory block that p points to. If we forget that p no longer 
points to a valid memory block, chaos may ensue: */

char *p = malloc(4);
...
free(p);
...
strcpy(p, "abc"); /*** WRONG ***/




























































