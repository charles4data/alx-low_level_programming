# 0x12. C - Singly linked lists
As part of my ALX-SE Learning, I completed tasks related to these project on 20/10/2023. The project focused on learning more about linked lists and how they compare to arrays. 

The project helped me understand what linked lists are, how to differentiate them from arrays, and how to create and manipulate them. The tasks for this project as listed below:
------------------------------

## Task 0. Print list:
The task asked me to write a function that prints all the elements of a list_t list, adhering to the following guidelines,

+ Prototype: size_t print_list(const list_t *h);
+ Return: the number of nodes,
+ Format: example was provided,
+ If str is NULL, print [0] (nil),
+ You are allowed to use printf.
-----------------------------------

## Task 1. List length:
This task expected me to write a function that returns the number of elements in a linked list_t list, and use the following prototype,

+ Prototype: size_t list_len(const list_t *h);
---------------------

## Task 2. Add node:
The task required me to write a function that adds a new node at the beginning of a list_t list, adhering to the following guidelines,

+ Prototype: list_t *add_node(list_t **head, const char *str);
+ Return: the address of the new element, or NULL if it failed
+ str needs to be duplicated
+ You are allowed to use strdup
----------------------

## Task 3. Add node at the end:
The task required me to write a function that adds a new node at the end of a list_t list, adhering to the following,

+ Prototype: list_t *add_node_end(list_t **head, const char *str);
+ Return: the address of the new element, or NULL if it failed
+ str needs to be duplicated
+ You are allowed to use strdup
------------------------

## Task 4. Free list:
I was required to write a function that frees a list_t list, and use the following prototype,

+ Prototype: void free_list(list_t *head);
--------------------
