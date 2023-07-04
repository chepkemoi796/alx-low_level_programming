#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer
 * Return: i or 0
 */
int pop_listint(listint_t **head)
{
listint_t *q;
int i;
if (!head || !*head)
return (0);
i = (*head)->n;
q = (*head)->next;
free(*head);
*head = q;
return (i);
}
