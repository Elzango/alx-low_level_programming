#include "main.h"
/**
 * *_strcpy - copy string pointed to by a pointer to a buffer pointed to by another pointer
 * @dest: destination string
 * @src: source string
 * Return: a pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i != '0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
