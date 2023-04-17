#ifndef DOG_H
#define DOG_H

/**
 * struct Dog - holds information about a dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog owner's name.
 */
typedef struct Dog
{
	char *name;
	float age;
	char *owner;
} Dog_t;

#endif
