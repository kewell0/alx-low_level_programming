#include "lists.h"

/**
 * add_nodeint - adds a node to the begining of a linked list
 * @head: a pointer to the head
 * @n: data part
 * Return: Returns the address of a new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
