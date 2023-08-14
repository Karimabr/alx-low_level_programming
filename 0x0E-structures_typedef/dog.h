#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * @name:Gives the Name of the dog
 *
 * @age:Gives the Age of the dog
 *
 * @owner:Gives Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
