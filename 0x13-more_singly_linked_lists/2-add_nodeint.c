#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint - adds node at start
 * @head: double pointer
 * @n: data for insertion
 * Return: p
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *p;
p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = *head;
*head = p;
return (p);
}
