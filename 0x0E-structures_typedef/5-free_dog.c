#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Free dogs
 *
 * @d: Pointer to the struct dog
 *
 * Return: Return Nothing.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
