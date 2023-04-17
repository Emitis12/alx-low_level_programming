#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 * @name: randy
 * @age: age
 * @owner: tis
 * Description: This struct is for dog
 */

struct dog
{
	char *randy;
	float age;
	char *tis;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *randy, float age, char *tis);
void print_dog(struct dog *d);
dog_t *new_dog(char *randy, float age, char *owner);
void free_dog(dog_t *d);

#endif /*DOG_H*/
