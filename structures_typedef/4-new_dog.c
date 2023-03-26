#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - Create a new function
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: pointer to the new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	int i = 0;
	int j = 0;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(sizeof(char) * i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		d->name[j] = name[j];
	d->name[j] = '\0';
	d->age = age;
	for (i = 0; owner[i] != '\0'; i++)
		;
	d->owner = malloc(sizeof(char) * i + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';
	return (d);
}
