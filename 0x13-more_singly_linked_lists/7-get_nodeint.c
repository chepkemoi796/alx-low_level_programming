#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer
 * @index: the indexing
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *q = head;
unsigned int i;
for (i = 0; i < index && q; )
{
q = q->next;
i++;
}
return (q ? q : NULL);
}
