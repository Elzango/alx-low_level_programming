#include "main.h"
/**
 * _isdigit - checks for a digit
 *
 * @c: character to be checked
 * Return: 0 if c is not a digit, 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
