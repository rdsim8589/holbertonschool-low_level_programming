#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog using the struct dog
 * @name: pointer to the name of the name string
 * @age: type float of the age
 * @owner: type pointer to the string owner.
 *
 * Return: a pointer of dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_1;

	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);
	dog_1->name = name;
	dog_1->owner = owner;
	dog_1->age = age;
	return (dog_1);
}
