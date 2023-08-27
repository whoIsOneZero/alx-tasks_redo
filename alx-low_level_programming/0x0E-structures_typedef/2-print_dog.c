#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the 'dog' struct
 * @d: pointer to the 'dog' struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		d->name = "(nil)";

	/*There'll be no null pointers to the .age member*/
	/**
	 * if ((*d).age == NULL)
	 * d->age = "(nil)";
	 */
	if ((*d).owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
