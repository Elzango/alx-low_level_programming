#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: the input string
 * Return: no return
 */

void print_rev(char *s)
{
	int i, n;
	
	n = sizeof(s) / sizeof(char);
	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
