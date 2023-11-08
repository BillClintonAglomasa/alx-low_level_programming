#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 *
 * @name: Pointer to name of dog
 * @age: Pointer to age of dog
 * @owner: The person who owns the dog.
 *
 * Return: Return Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	for (a = 0; name[a]; a++)
		;
	a++;
	dog->name = malloc(a * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (b = 0; b < a; b++)
		dog->name[b] = name[b];
	dog->age = age;
	for (c = 0; owner[c]; c++)
		;
	c++;
	dog->owner = malloc(c * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (b = 0; b < c; b++)
		dog->owner[b] = owner[b];

	return (dog);
}
