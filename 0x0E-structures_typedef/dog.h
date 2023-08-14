#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a structure for dogs
 *@name: it's a name
 *@age: some float
 *@owner: idk
 *
 *Description: idk
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
