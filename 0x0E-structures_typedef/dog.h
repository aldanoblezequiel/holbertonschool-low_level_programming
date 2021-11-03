#ifndef MAIN_H
#define MAIN_H

/**
* struct dog - structure name
* @name: name
* @age: age
* @owner: owner
* Description: a dog structure
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
#endif
