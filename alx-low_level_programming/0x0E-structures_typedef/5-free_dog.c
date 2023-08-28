#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for the 'dog' struct
 * @d: pointer the 'dog' struct point to be freed.
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
