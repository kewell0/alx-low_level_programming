#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
*print_list - display all nodes of a linked list
*@h: linked list head
*Return: number of nodes
*/


size_t print_list(const list_t *h)
{
unsigned int count = 0;
const list_t *current = h;
while (current != NULL)
{

if (current->str == NULL)
	printf("[0] (nil)\n");
else
{
	printf("[%d] %s\n", current->len, current->str);
}
current = current->next;
count++;
}
return (count);
}
