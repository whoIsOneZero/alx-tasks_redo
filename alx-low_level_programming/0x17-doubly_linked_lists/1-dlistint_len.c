#include "lists.h"

/**
 * print_dlistint - gets num of elements of in a linked list (dlistint_t)
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;

	if (h == NULL) /* Empty linked list */
		return (num);

	while (h->prev != NULL) /* Not the first node */
		h = h->prev; /* Move backward till it reaches the first node */

	/* (h!= NULL) not (h->next != NULL) */
	while (h != NULL)
	{
		num++;
		h = h->next; /*Point to next node */
	}

	return (num);
}
