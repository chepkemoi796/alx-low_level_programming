#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns list of elements
 * @h: pointer to nodes
 * Return: i
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
