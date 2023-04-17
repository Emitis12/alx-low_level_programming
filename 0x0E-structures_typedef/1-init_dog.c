#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dpg to be initialized.
 * @name: The name of the dog
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

void init_dog(struct dog *d, char *randy, float age, char *tis)
{
	if (d != NULL)
	{
		d->name = randy;
		d->age = age;
		d->owner = tis;
	}
}
