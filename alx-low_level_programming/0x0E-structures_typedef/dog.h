#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - alias for dogs' characteristics
 * @name: the dog's name
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a new alias for struct dog
 */
typedef struct dog dog_t;

/*>>> Function prototypes <<<*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*STRUCT_DOG*/
