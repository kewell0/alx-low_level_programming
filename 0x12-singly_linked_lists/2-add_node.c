#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of the string
 * @s: takes string
 *
 * Return: returns the length int
 */

unsigned int _strlen(const char *s)
{
	unsigned int count;

	count = 0;
	while (s[count])
		count++;

	return (count);
}


/**
 * add_node - adds a node to a linked list
 * @head: the head of a linked list
 * @str: string to be duplicated
 * Return: NULL if failed, or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *member = malloc(sizeof(list_t));

	if (member == NULL)
		return (NULL);
	member->str = strdup(str);
	member->len = _strlen(str);
	member->next = *head;
	*head = member;

	return (*head);
}
