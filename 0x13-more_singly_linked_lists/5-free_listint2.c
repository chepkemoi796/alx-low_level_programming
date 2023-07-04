#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees listint_t **head
 * @head: pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *q;
if (head == NULL)
return;
while (*head)
{
q = (*head)->next;
free(*head);
*head = q;
}
}
