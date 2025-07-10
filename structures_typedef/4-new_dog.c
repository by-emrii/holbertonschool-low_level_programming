#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
		return (NULL);

	mydog->name = _strdup(name);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}

	mydog->owner = _strdup(owner);
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}

	mydog->age = age;

	return (mydog);
}
