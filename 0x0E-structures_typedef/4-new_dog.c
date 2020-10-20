#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *new_dog -  function that prints a struct dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: pointer to new dog
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int newname;
	int newowner;


	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	for (newname = 0; name[newname]; newname++)
	{
	}
	for (newowner = 0; owner[newowner]; newowner++)
	{
	}
	(*new_dog).name = malloc((newname + 1) * sizeof(char));
	(*new_dog).owner = malloc((newowner + 1) * sizeof(char));

	if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free((*new_dog).owner);
		free(new_dog);
		return (NULL);
	}

		for (newname = 0; name[newname]; newname++)
			(*new_dog).name[newname] = name[newname];
		for (newowner = 0; owner[newowner]; newowner++)
			(*new_dog).owner[newowner] = owner[newowner];

		(*new_dog).name[newname] = 0;
		(*new_dog).owner[newowner] = 0;
		(*new_dog).age = age;
		return (new_dog);
}
