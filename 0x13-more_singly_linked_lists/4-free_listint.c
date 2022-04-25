#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: a pointer to the head
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *prev;

	while (head)
	{
		prev = head;
		head = head->next;
		free(prev);
	}
}
