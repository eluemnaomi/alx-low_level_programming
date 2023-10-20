Singly Linked List Example
Overview
This C program demonstrates the implementation of a singly linked list. It includes a print_list function to print the elements of the list and a main function for testing purposes.

Files
0-main.c: Contains the main function for testing the print_list function.
lists.h: Header file with the definition of the list_t structure and the prototype for the print_list function.
Compilation and Execution
To compile the program, use the following commands:

gcc -Wall -Werror -Wextra -pedantic *.c -o linked_list

To execute the program:
./linked_list

Code Style
The code in this project follows the Betty coding style.

Structure of list_t
The list_t structure represents a node in the singly linked list:

typedef struct list_s
{
    char *str;                /* string (malloc'ed string) */
    unsigned int len;         /* length of the string */
    struct list_s *next;      /* points to the next node */
} list_t;

print_list Function
The print_list function is responsible for printing all elements of the linked list. It returns the number of nodes in the list.

size_t print_list(const list_t *h);

Example Usage

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    /* Initialization of the linked list */
    head = &hello;
    new = malloc(sizeof(list_t));

    /* Memory allocation check */
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }

    /* Setting values for the new node */
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;

    /* Printing elements of the linked list */
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");

    /* Freeing allocated memory */
    free(new->str);
    new->str = NULL;

    /* Printing elements of the modified linked list */
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
