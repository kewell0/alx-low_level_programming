#include "lists.h"

/**
 * add_node - adds a node
 * @head: a pointer to head
 * @n: data part
 * Return: a pointer
 */
listint_t  *add_node(listint_t **head, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: reference pointer
 * @idx: nth node after which a new element is inserted
 * @n: data
 * Return: The address of a new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	unsigned int i;

	if (idx == 0)
	{
		return (add_node(head, n));
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (!current)
				return (NULL);
			current = current->next;
		}
		if (!current)
			return (NULL);
		return (add_node(&(current->next), n));
	}
}
