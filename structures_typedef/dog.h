#ifndef STRUCT_TYPEDEF_H
#define STRUCT_TYPEDEF_H
#include <stdio.h>
/**
 * struct dog - dog data
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * dog data structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
