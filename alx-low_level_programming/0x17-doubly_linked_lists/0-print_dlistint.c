#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list (dlistint_t)
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		num++;
		h = h->next; /*Point to next node */
	}

	return (num);
}
