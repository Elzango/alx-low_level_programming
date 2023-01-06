#include "main.h"
/**
 * *_memset - fills the memory with a constant byte
 * @s: memory area tobe filled
 * @b: the constant byte to fill the memory with
 * @n: size of the bytes to be filled
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
