#include "lists.h"

/**
 * free_dlistint - free all the elements of a linked list (dlistint_t)
 * @head: pointer to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;


	if (head != NULL) /*Only non-empty linked lists*/
		while (head->prev != NULL) /* Not the first node */
			head = head->prev; /* Move backward till the first node */

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
