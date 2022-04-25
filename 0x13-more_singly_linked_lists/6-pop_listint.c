#include "lists.h"

/**
 * pop_listint - deletes the first node and returns its data
 * @head: reference pointer to head
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *prev;

	if (*head)
	{
		data = (*head)->n;
		prev = (*head)->next;
		free(*head);
		*head = prev;
	}
	return (data);
}
