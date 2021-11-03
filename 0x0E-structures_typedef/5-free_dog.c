#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Free
 * @d: liberated memory
 */

void free_dog(dog_t *d)
{
	if (d) /** If d exists*/
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
