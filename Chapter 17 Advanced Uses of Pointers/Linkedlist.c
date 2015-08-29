/* Linked List */
/* A linked list consists of a chain of structures (called nodes), with each node
containing a pointer to the next node in the chain.

The last node in the list contains a null pointer */

/* Declaring a Node Type */
struct node{
	int value; 			/* data stored in the node */
	struct node *next;  /* pointer to the next node */
};

struct node *first = NULL;
/* Setting first to NULL indicates that the list is initially empty */

/* Creating a Node */
/* 3 steps.
1. Allocate memory for the node
2. Store data in the node
3. Insert the node into the list
 */
 
 /* When we create a node, we'll need a variable that can point to the node temporarily, until
 it's been inserted into the list. Lets call this variable new_node: */
 struct node *new_node;
 
 new_node = malloc(sizeof(struct node));
 /* new_node now points to a block memory just large enough to hold a node structure: */
 /*  new_node = malloc(sizeof(new_node)); ***WRONG*** 
 malloc will allocate only enough memory for a pointer to a node structure.
 */
 
 /* store data in the value member of the new node */
 (*new_node).value = 10; /* or */ new_node->value = 10;
 /* the parenthesis around *new_node is mandatory because the . operator would take precedence over 
 the * operator */
 scanf("%d", &new_node->value);
 
 
 /* Inserting a Node at the Beginning of a Linked List */
 /* Advantages of a linked list is that nodes can be added at any point in the list:
 the beginning, end, or anywhere in the middle */
 new_node->next = first;
 first = new_node;
 
 /* Inserting a node into a linked list */
 struct node *add_to_list(struct node *list, int n)
 {
 	struct node *new_node;
 	
 	new_node = malloc(sizeof(struct node));
 	if(new_node == NULL){
 		printf("Error: malloc failed in add_to_list\n");
 		exit(EXIT_FAILURE);
	 }
	 
	 new_node->value = n;
	 new_node->next = list;
	 return new_node;
 }
 /* Note that add_to_list doesn't modify the list pointer. Instead, it returns a pointer to the
 newly created node (now at the beginning of the list). When we call add_to_list, we'll
 need to store its return value into first:	*/
 first = add_to_list(first, 10);
 first = add_to_list(first, 20);
 /* These statements add nodes containing 10 and 20 to the list pointed to by first */
 
 struct node *read_numbers(void)
 {
 	struct node *first = NULL;
 	int n;
 	
 	printf("Enter a series of integers (0 to terminate): ");
 	for(;;){
 		scanf("%d", &n);
 		if(n == 0)
 			return first;
 		first = add_to_list(first, n);
	 }
 }
 
 /* Searching a Linked List */
 for(p = first; p != NULL; p = p->next)
 ...
 /* p = p->next advances the p pointer from one node to the next*/
 
 /* function search_list searches a list for an integer n, if it finds n, search_list will return
 a pointer to the node containing n; otherwise, it will return a null pointer
 list-traversal */
 struct node *search_list(struct node *list, int n)
 {
 	struct node *p;
 	
 	for(p = list; p != NULL; p = p->next)
 		if(p->value == n)
 			return p;
 		return NULL;
 }
 /* other ways */
 struct node *search_list(struct node *list, int n)
 {
 	for(;list != NULL; list = list->next)
 		if(list->value == n)
 			return list;
 	return NULL;	
 }
 /* alternative */
 struct node *search_list(struct node *list, int n)
 {
 	for(; list != NULL && list->value != n; list->next)
 		;
 	return list;
 }
 /* using while */
 struct node *search_list(struct node *list, int n)
 {
 	while(list != NULL && list->value != n)
 		list = list->next;
 	return list;
 }
 
 
 /* Deleting a Node from a Linked List */
 /* 3 steps
 1. Locate the node to be deleted
 2. Alter the previous node so that it "bypasses" the deleted node.
 3. Call free to reclaim the space occupied by the deleted node. */
 for(cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
 ;
 /* finds n and leaves a trailing prev */
 
 struct node *delete_from_list(struct node *list, int n)
 {
 	struct node *cut, *prev;
 	
 	 for(cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next)
 ;
 
	 if(cur == NULL)
	 	return list; /* n was not found */
	 if(prev == NULL)
	 	list = list->next; /* n is in the first node */
	 else
	 	prev->next = cur-next; /* n is in some other node */	 
	 free(cur);
	 return list;	
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
