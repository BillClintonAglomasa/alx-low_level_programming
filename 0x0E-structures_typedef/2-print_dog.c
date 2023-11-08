#include <stdio.h>
#include "dog.h"
/**
 * print_dog - A function that prints the struct dog
 *
 * @d: Pointer to the struct dog
 *
 * Return: Return Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}
}
