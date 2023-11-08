#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a struct named dog
 *
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: Data structure for storing details of dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
