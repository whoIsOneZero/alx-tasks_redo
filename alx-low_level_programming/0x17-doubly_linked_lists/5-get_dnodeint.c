#include "lists.h"

/**
 * get_dnodeint_at_index - retuns the nth node of a dlistint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: index of the node to be gotten
 *
 * Return: [SUCCESS]: a pointer to the node, [NODE DOESN'T EXIT]: NULL
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int position = 0;

	if (head == NULL)   /*Empty linked list*/
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;   /* Go to the beginning */

	while (head != NULL)
	{
		if (position == index)
			break;

		head = head->next;
		position++;
	}
	/* head == NULL*/

	return (head);
}
