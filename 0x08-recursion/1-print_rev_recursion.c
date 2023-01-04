#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse using recursion concept
 * @s: the input string
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
