#include "lists.h"

/**
 * free_list - frees given linked list
 * @head: first element of a linked list
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *current_addr = head;
	list_t *next_addr;

	if (head == NULL)
		return;
	while (current_addr->next != NULL)
	{
		free(current_addr->str);
		next_addr = current_addr->next;
		free(current_addr);
		current_addr = next_addr;
	}

	free(current_addr->str);
	free(current_addr);
}
