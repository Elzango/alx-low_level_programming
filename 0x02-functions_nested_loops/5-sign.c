#include "main.h"
/**
 * print_sign - Prints sign of a number.
 *
 * @n: The input number as an integer
 *
 * Return: 1 if greater than zero, 0 if equal to zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
