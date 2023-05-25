#include <stdlib.h>
#include "dog.h"

/**
  *_strlen - returns the length of a string
  *@s: the string
  *Return: the length of the string
  */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 **_strcpy - copies the string pointed to by src
  *including the terminating null byte (\0)
  *to the buffer pointed to by dest
  *@dest: pointer to the buffer
  *@src: the source
  *Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0, x = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (; x < a; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
  *new_dog - creates a new dog
  *@name: name of the dog
  *@age: age of the dog
  *@owner: owner of the dog
  *Return: pointer to the new dog, otherwise NULL
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
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