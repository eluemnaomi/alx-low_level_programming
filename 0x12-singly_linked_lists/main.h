#ifndef MAIN_H
#define MAIN_H

/**
 * struct list_t - A structure representing a linked list node
 * @str: The string data of the node
 * @next: Pointer to the next node in the linked list
 */
typedef struct list_t
{
    char *str;
    struct list_t *next;
} list_t;

/**
 * print_list - Prints the elements of a linked list
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_list(const list_t *h);

#endif /* MAIN_H */
