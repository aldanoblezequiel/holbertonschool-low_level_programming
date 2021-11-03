#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* init_dog - dog variable init
* @d: pointer
* @name: name
* @age: age
* @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
