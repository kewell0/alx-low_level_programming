#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to head
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (!head)
		return;
	while (*head)
	{
		prev = (*head)->next;
		free(*head);
		*head = prev;
	}
}
