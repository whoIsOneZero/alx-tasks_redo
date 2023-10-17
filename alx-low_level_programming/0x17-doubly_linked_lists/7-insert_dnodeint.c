#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i;

	new = NULL;  /*Empty linked list*/
	if (idx == 0)
		new = add_dnodeint(h, n); /*Insert node at the beginning*/
	else
	{
		head = *h;
		i = 1;  /*To traverse the list starting at index 1*/
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;  /*Go to the first node*/
		while (head != NULL)
		{
			if (i == idx) /* Current node at desired index? */
			{
				if (head->next == NULL) /*Only one node present*/
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break; /*New node created. Exit loop */
			}
			head = head->next;
			i++;  /* next node index */
		}
	}

	return (new);
}
