#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head
 * @n: the integer data
 *
 * Return: address of the new element [SUCCESS], or NULL [FAILED]
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr = *head; /*To traverse the list*/

	new = malloc(sizeof(dlistint_t));
	if (new == NULL) /*malloc failed*/
		return (NULL);

	/* Initialize new node */
	new->n = n;
	new->prev = NULL;

	if (ptr == NULL) /*Empty linked list*/
	{
		/*Set 'new' as the only node and update *head */
		new->next = NULL;
		*head = new;
	}

	else /* Non-empty linked list */
	{
		/* Traverse to the beginning of the original list*/
		while (ptr->prev != NULL)
			ptr = ptr->prev;

		new->next = ptr;
		ptr->prev = new; /*Old first node point to new first node*/
		*head = new;
	}
	return (new);
}
