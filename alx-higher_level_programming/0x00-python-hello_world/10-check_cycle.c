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
}