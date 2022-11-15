#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a struct dog
 *
 * @d: dog's structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
		{
			print("Name: (nil/n");
		}
		else
		{
			print("Name: %s\n", d->name);
		}
		print("Age: %f\n", d->age);
		if (!(d->owner);
		{
			print("Owner: (nil/n");
		}
		else
		{
			print("Owner: %s\n", d->owner);
		}
	}
}
