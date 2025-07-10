#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to dog struct
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;/*return nothing due to fx*/

	d->name = name; /*same as (*d).name long form*/
	d->age = age;
	d->owner = owner;
}
