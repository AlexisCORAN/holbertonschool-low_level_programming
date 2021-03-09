#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
char *_strcpy(char *dest, char *src);

/**
* _strcpy - function that copies the string.
*
* @dest: A buffer to copy the string to.
* @src: The source string to copy.
*
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
/**
* _strlen -  function that returns the length of a string.
*
*@p: pointer character.
*
*Return: length of a string.
*
*/
int _strlen(char *p)
{
	int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}

/**
* new_dog - function that creates a new dog.
*
*@name: name of a dog.
*
*@age: age of a dog.
*
*@owner: owner of a dog.
*
*Return: returns new dog.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (my_dog->name == NULL)
		return (NULL);
	_strcpy(my_dog->name, name);

	my_dog->age = age;
	my_dog->owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (my_dog->owner == NULL)
		return (NULL);
	_strcpy(my_dog->owner, owner);

	return (my_dog);
}
