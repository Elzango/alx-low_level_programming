#include "main.h"
/**
 * print_rev - reverse a string
 * @s: the input string
 * Return: no return
 */

void rev_string(char *s)
{
	int i, len, j, midstr;
	char m;

	/* length of string */
	for (i = 0; (s[i]) != '\0'; i++)
		len = i;

	/* find the midpoint of string length */
	midstr = len / 2;
	
	/* swap string positions */
	for (j = 0; j < midstr; j++)
	{
		m = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = m;
	}
	
}
