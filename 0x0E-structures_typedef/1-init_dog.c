#include <stdio.h>
#include "dog.h"
/**
 *init_dog - it does things
 *@d: idk
 *@name: idk
 *@age: the age
 *@owner: ...
 *Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
