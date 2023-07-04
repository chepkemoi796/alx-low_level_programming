#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer
 * @idx: indexing
 * @n: data
 * Return: NULL or pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *q;
listint_t *p = *head;
unsigned int i;
q = malloc(sizeof(listint_t));
if (q == NULL || head == NULL)
return (NULL);
q->n = n;
q->next = NULL;
if (idx == 0)
{
q->next = *head;
*head = q;
return (q);
}
for (i = 0; i < idx && p; i++)
{
if (i == idx - 1)
{
q->next = p->next;
p->next = q;
return (q);
}
else
p = p->next;
}
return (NULL);
}
