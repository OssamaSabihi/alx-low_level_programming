#ifndef dog_h
#define dog_h

/**
* struct dog - struct dog
* @name: name s dog
* @age: age s dog
* @owner:  owner s the dog
*/

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

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
