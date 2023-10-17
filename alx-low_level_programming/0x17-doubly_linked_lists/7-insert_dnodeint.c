#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: a pointer to the h of the linked list
 * @idx: index of the node to be gotten
 *
 * Return: [SUCCESS]: address of the new node, [CANNOT ADD]: NULL
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int position = 0;
	dlistint_t *ptr = *h; /*For traversing the list*/
	dlistint_t temp;
	dlistint_t new;

	if (h == NULL)   /*Empty linked list*/
		return (NULL);

	while (h->prev != NULL)
		h = h->prev;   /* Go to the beginning */

	while (position != idx)
	{
		ptr = ptr->next;
		position++;
	}
	/* positon == idx*/
	temp = ptr->next;  /*Node just after the  desired index*/
	ptr->next = new;
	temp->prev = new;

	new->next = temp;
	new->prev = ptr;

	return (h);
}
