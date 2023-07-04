#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *add_nodeint_end - add node at end
 * @head: double pointer
 * @n: data for insertion
 * Return: p
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *q = *head;
p = malloc(sizeof(listint_t));
if (p == NULL)
return (NULL);
p->n = n;
p->next = NULL;
if (*head == NULL)
{
*head = p;
return (p);
}
while (q->next)
q = q->next;
q->next = p;
return (p);
}
