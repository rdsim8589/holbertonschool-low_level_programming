#ifndef DOG_GUARD
#define DOG_GUARD
/**
 * struct dog - name, age an owner of dog
 * @name: pointer to a char string of the dog's name
 * @age: a float of the dog's age
 * @owner: a pointer to a char string of the dog's owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
