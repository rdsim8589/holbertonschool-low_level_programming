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
	int name_len, owner_len, i, j;

	name_len = owner_len = 0;
	while (name[name_len++] != '\0')
		;
	while (owner[owner_len++] != '\0')
		;
	dog_1 = malloc(sizeof(dog_t));
	if (dog_1 == NULL)
		return (NULL);
	dog_1->name = malloc(sizeof(char) * name_len);
	if (dog_1->name == NULL)
		return (NULL);
	for (i = 0; i <= name_len; i++)
	{
		dog_1->name[i] = name[i];
	}
	dog_1->owner = malloc(sizeof(char) * owner_len);
	if (dog_1->owner == NULL)
		return (NULL);
	for (j = 0; j <= owner_len; j++)
	{
		dog_1->owner[j] = owner[j];
	}
	dog_1->age = age;
	return (dog_1);
}
