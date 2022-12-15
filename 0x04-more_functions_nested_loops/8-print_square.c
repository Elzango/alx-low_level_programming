#include "main.h"
/**
 * print_square - prints a square
 *
 * @size: the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((size == 0) || (size < 0))
			{
				_putchar('\n');
			}
			_putchar(35);
		}
		_putchar('\n');
	}
}
