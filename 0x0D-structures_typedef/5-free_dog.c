#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the allocated memory for a dog that was created
 * @d: type pointer to a struct of dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
