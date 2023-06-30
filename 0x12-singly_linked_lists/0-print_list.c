#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h: pointer to nodes
 * Return: i
 */
size_t print_list(const list_t *h)
{
unsigned int i = 0;
if (h->str == NULL)
printf("[0] (nil)\n");
for (; h != NULL; )
{
i++;
printf("[%u]%s\n", h->len, h->str);
h = h->next;
}
return (i);
}
