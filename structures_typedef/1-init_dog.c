#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes dog structure
 * @d: pointer of type dog
 * @name: pointer of name
 * @age: age
 * @owner: pointer of owner
 *
 * Return: if not exec
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
