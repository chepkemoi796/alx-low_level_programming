#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - return sum of all data
 * @head: pointer to node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *q = head;
for (; q; )
{
sum = sum + q->n;
q = q->next;
}
return (sum);
}
