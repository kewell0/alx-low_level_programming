#include "lists.h"

/**
 * print_list - simple function to print the lements of a linked list
 * @h: pointer to the struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == '\0')
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		i++;
	}

	return (i);
}
