#include"dog.h"

/**
 * init_dog - initializes the dog structure
 * @d: pointer
 * @name: pointer to name
 * @age: age of the dog
 * @owner: pointer to owmner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
