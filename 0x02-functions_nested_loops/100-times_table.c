#include "main.h"
/**
 * print_times_table - Prints the n times table commencing from zero
 *
 * @n: number times table (for n between 0 and 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int i, j, m1;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				m1 = i * j;
				_putchar(44);
				_putchar(32);
				if (m1 <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(m1 + 48);
				}
				else if (m1 <= 99)
				{
					_putchar(32);
					_putchar((m1 / 10) + 48);
					_putchar((m1 % 10) + 48);
				}
				else
				{
					_putchar(((m1 / 100) % 10) + 48);
					_putchar(((m1 / 10) % 10) + 48);
					_putchar((m1 % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
