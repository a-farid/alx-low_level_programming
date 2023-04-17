#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - struct for a dog prototyp
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores properties of a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: struct "dog" stores its name, age and its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
