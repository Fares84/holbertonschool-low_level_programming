#include "dog.h"
#include <stdio.h>

/**
 *print_dog -  function that prints a struct dog
 *@d: pointer to struct
 *Return: void
 **/
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			puts("name: (nil)");
		else
		printf("Name: %s\n", (*d).name);
		printf("age: %f\n", (*d).age);

		if ((*d).owner == NULL)
		puts("owner: (nil)");
		printf("Owner: %s\n", (*d).owner);
	}
}
