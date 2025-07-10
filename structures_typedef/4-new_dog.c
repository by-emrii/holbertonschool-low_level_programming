#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to input string
 * Return: pointer to dup string, NULL if fail
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0, length = 0;

	if (str == NULL)
		return (NULL);
	/*find length of str first*/
	while (str[length] != '\0')
		length++;
	ptr = malloc(sizeof(char) * (length + 1));/* +1 for null terminator*/
	if (ptr == NULL)
		return (NULL);
	while (i <= length)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
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
