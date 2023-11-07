#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - stores information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct that stores name, age
 * and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
