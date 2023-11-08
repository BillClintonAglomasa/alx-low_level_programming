#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 *
 * @d: Pointer to the struct dog
 * @name: The name of the dog
 * @age: Age of dog
 * @owner: The person who owns the dog.
 *
 * Return: Return Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
