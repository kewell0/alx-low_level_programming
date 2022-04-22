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
 * add_node_end - adds node at the end of a list
 * @head: head of list
 * @str: string to be copied
 * Return: returns the address of the new member
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *member = malloc(sizeof(list_t));
	list_t *prev = *head;

	if (member == NULL)
		return (NULL);
	member->str = strdup(str);
	member->len = _strlen(str);
	member->next = NULL;
	if (*head == NULL)
	{
		*head = member;
		return (*head);
	}
	while (prev->next != NULL)
	{
		prev = prev->next;
	}
	prev->next = member;
	return (member);
}
