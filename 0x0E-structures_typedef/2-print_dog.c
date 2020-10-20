#include "dog.h"
#include <stdio.h>

/**
 *print_dog -  function that prints a struct dog
 *@d: pointer to struct
 *Return: void
 **/
void print_dog(struct dog *d)
{
	if (!d)
		return;
		if ((*d).name == NULL)
			puts("Name: (nil)");
		else
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);

		if ((*d).owner == NULL)
		puts("owner: (nil)");
		printf("Owner: %s\n", (*d).owner);

}
