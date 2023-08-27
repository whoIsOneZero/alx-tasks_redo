#include "dog.h"

/**
 * init_dog - initializes a variable of type, 'struct dog'
 * @d: pointer to the declared variable of type 'struct dog'
 * @name: dog's name to be initialized
 * @age: dog's age to be initialized
 * @owner: dog's owner to be initialized
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/*Diff ways to dereference a pointer to a struct*/
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
