#include "main.h"

/**
 * main - prints _putchar, followed by newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
		int m[] = {95, 112, 117, 116, 99, 104, 97, 114};
		int i, s;

		s = sizeof(m) / sizeof(int);
		for (i = 0; i < s; i++)
		{
			_putchar(m[i]);
		}
		_putchar('\n');
		return (0);
	}
