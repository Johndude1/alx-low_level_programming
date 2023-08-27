#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct
 * @d: pointer to struct dog to initializes
 * @name: name to initialize
 * @age: age to initialize
 * struct_dog_ my dog
 * @owner: owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
