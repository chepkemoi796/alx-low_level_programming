#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return number of nodes
 * @h: pointer
 * Return: i
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
