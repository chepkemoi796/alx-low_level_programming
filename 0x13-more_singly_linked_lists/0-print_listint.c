#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements
 * @h: pointer
 * Return: i
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
