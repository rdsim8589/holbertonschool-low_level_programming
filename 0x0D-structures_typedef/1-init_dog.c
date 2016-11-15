#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize the varibles of type struct dog
 * @d: a pointer to the struct dog struct
 * @name: a pointer to the string of the name
 * @age: a float of the age
 * @owner: a pointer of type char to the string of the owner's name
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
