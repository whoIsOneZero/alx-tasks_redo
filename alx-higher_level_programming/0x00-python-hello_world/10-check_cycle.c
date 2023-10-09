#include "lists.h"

/**
 * check_cycle - checks to  see if there's a loop in the linked list
 * Uses the 'tortoise and hare' algorithm (Floyd's cycle detection)
 *
 * @list: a pointer to the linked list
 *
 * Return: int
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr = list;
	listint_t *fast_ptr = list;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next; /*Move by one step*/
		fast_ptr = fast_ptr->next->next; /*Move by two steps*/

		/*If the two pointers meet, then there's a cycle*/
		if (slow_ptr == fast_ptr)
		{
			return (1);
		}
	}

/*Out of the loop, meaning end of list reached without a meeting point*/
    /*Hence, there's no cycle*/

	return (0);
}
