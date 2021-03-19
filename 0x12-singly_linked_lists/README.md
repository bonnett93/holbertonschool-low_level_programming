#0x12. C - Singly linked lists

This directory contains exercise to work with linked list.

###Files

- list.h
		This file contains all prototypes of functions bellow, and the
		structure needed to creates the nodes, the structure is definited as:
		typedef struct list_s list_t;
		
		typedef struct list_s
		{
    		char *str;
    		unsigned int len;
    		struct list_s *next;
		} list_t;

- 0-print_list.c
		This file contains the function print_list(), that prints all the
		elements of a list_t list.
		Prototype: size_t print_list(const list_t *h);
		Return: the number of nodes
		If str is NULL, print [0] (nil)

- 1-list_len.c
		This file contanis the function list_len, that returns the number
		of elements in a linked list_t list.
		Prototype: size_t list_len(const list_t *h);

- 2-add_node.c
		This file contains the function add_node(), that adds a new node at
		the beginning of a list_t list.
		Prototype: list_t *add_node(list_t **head, const char *str);
		Return: the address of the new element, or NULL if it failed

- 3-add_node_end.c
		This file contains the function add_node_end, that adds a new node at
		the end of a list_t list.
		Prototype: list_t *add_node_end(list_t **head, const char *str);
		Return: the address of the new element, or NULL if it failed

- 4-free_list.c
		This file contains the function free_list, that frees a list_t list.
		Prototype: void free_list(list_t *head);
