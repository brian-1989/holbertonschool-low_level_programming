#ifndef DOG_H
#define DOG_H
/**
* struct dog - Breve descripción
* @name: Primer miembro
* @age: Segundo miembro
* @owner: Tercer miembro
*Descripción: Descripción más larga
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
