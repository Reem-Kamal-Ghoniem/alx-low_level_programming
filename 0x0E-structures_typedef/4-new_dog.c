#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - new client type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	int namelen = 0, ownlen = 0;
	int i;

	while (name[namelen++])
		;
	while (owner[ownlen++])
		;

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	 poppy->name = malloc(namelen * sizeof(dog_t));
        if (poppy == NULL)
                return (NULL);
	for (i = 0; i < namelen; i++)
		(*poppy).name[i] = name[i];
	(*poppy).age = age;

	poppy->owner = malloc(ownlen * sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);
	for (i = 0; i < ownlen; i++)
		poppy->owner[i] = owner[i];

	return (poppy);
}
