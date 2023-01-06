#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: The string to check for acceptable substring
 * @accept: The string of acceptable characters
 * Return: he number of bytes in the initial segment of s which
 *  consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
