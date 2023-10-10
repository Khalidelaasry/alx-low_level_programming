#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: dog name.
 * @age: dog's age.
 * @owner: owner of the dog.
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
