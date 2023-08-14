#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - it prints the dog
 *@d:the struct to be printed
 *Return: nothing
*/
void free_dog(dog_t *d)
{
	free(d);
}
