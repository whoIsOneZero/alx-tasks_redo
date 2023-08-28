#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - calculates the length of a string
 * @s: pointer to string whose length to be calculated
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i); /*The string length*/
}

/**
 * _strcpy - copies one string to another + '\0'
 * @src: pointer to string which is to be copied from.
 * @dest: pointer to buffer where string is to copied to.
 *
 * Return: pointer to the copied string (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = _strlen(src);

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new instances of the 'dog_t' struc,
 * and initializes its members.
 * @name: dog's name
 * @age: dog's age
 * @owner: doog's owner
 *
 * Return: a pointer to the newly created 'dog' instance.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/*Allocate new dog_t structure*/
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/*Allocate memory for the string members*/
	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
