#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - params
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd  member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
