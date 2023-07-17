#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen - return length of the string
 * @s: Sring being checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - cpies a string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string copied(dest)
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: First par
 * @age: Second par
 * @owner: Third parameter
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);
	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (i++));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	ptr->owner = malloc(sizeof(char) * j++);
	if (ptr->owner == NULL)
	{
		free(ptr);
		return (NULL);
	}
	
	_strcpy(ptr->name, name);
	ptr->age = age;
	_strcpy(ptr->owner, owner);

	return (ptr);
}
