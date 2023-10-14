#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head
 * @n: the integer data
 *
 * Return: address of the new element [SUCCESS], or NULL [FAILED]
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
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
		/* Traverse to the end of the original list*/
		while (ptr->next != NULL)
			ptr = ptr->next;

		new->prev = ptr;
		ptr->next = new; /*Old last node point to new last node*/
		*head = new;
	}
	return (new);
}
