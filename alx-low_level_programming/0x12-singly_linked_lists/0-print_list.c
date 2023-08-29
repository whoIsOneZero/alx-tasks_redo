#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list of type 'list_t'
 * @h: a pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (!(h->str)) /*Null*/
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
