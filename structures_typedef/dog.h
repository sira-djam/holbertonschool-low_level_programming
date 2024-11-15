#ifndef dog_h
#define dog_h
/**
 * struct dog - create un type struct dog
 * @name: nom
 * @age: integers
 * @owner: proprietaire
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif

