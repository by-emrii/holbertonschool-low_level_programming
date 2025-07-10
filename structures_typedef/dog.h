#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Description - struct for dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
