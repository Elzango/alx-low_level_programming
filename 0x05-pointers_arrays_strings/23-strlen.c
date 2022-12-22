#include "main.h"
/**
 * _strlen - returns the length of string
 * @str: the input string
 * Return: no return
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; (s[i]) != '\0'; i++);
	return (i);
}
