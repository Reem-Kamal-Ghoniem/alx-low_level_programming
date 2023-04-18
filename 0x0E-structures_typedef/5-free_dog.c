#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free our dogs
 * @d: struct name
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
