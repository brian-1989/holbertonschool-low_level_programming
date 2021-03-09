#ifndef DOG_H
#define DOG_H
/**
* struct dog - Breve descripción
* @name: Primer miembro
* @age: Segundo miembro
* @owner: Tercer miembro
*Descripción: Descripción más larga
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
#endif /* DOG_H */
