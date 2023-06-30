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
size_t i = 0;
for (; h; )
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
