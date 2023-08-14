#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - it prints the dog
 *@name :the struct to be printed
 *@age:....
 *@owner:....
 *Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL)
	return (NULL);

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
