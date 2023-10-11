#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: [Success] - pointer to the new current, [Failure] - NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL); /*malloc failed*/

	new->n = number;

    /*Insert at the beginning of the list*/
    /*Linked list empty or function called with an empty list*/
	if (current == NULL || current->n >= number)
	{
		new->next = current;
		*head = new;
		return (new);
	}

	while (current && current->next && current->next->n < number)
		current = current->next; /*Next node*/

	new->next = current->next; /*At desired node*/
	current->next = new;

	return (new);
}
