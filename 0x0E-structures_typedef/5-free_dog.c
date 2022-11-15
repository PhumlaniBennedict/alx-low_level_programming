#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 *
 * @d: dogs free
 *
 * Return: Void, always
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

