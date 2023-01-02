#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the given string to be searched
 * @c: the character to find in the given string
 * Return: returns a pointer to first occurrence of the character
 * or a NULL if the character is not found
 */
char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	return NULL;
}
