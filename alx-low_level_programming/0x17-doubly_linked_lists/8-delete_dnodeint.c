#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node @ a given index of a list
 * (dlistint_t)
 *
 * @head: double pointer to the head of the list
 * @index: position of node to delete at
 * Return: [SUCCESS]: 1 or [FAILURE]: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;    /*To traverse the list*/
	dlistint_t *h2;    /*ptr to the node before the one to be deleted*/
	unsigned int i;    /*Keep track of current position in the list*/

	h1 = *head;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev; /*Go to the first node*/

	i = 0;

	while (h1 != NULL)
	{
		if (i == index) /*Found the node to delete?*/
		{
			if (i == 0) /*The first node*/
			{
				*head = h1->next; /*Update to point to node 2*/
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else   /*Not the first node*/
			{
				h2->next = h1->next; /*Node before - node after*/

				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
