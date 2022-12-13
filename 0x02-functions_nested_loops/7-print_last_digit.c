#include "main.h"
/**
 * Print last digit - Prints the last digit of a given number.
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-m + '0');
		return (-m);
	}
	else
	{
		_putchar(m + '0');
		return (m);
	}
}
