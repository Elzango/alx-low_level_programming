#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 *
 * @n: number of times straight line is printed
 *
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((n == 0) || (n < 0))
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
