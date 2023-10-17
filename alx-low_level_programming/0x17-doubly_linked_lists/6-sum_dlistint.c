#include "lists.h"

/**
 * sum_dlistint - adds all the elements of a linked list (dlistint_t)
 * @head: pointer to the head of the list
 * Return: [SUCCESS]: sum of the elements, [FAILURE]: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL) /* Empty linked list */
		return (0);

	while (head->prev != NULL) /* Not the first node */
		head = head->prev; /* Move backward till it reaches the first node */

	/* (h!= NULL) not (h->next != NULL) */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next; /*Point to next node */
	}

	return (sum);
}
