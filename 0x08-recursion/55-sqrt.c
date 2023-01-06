#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - determine the square root of a number
 * @n: The give number (input number)
 * Return: Return the sqrt of a number
 */
int _sqrt_recursion(int n)
{
	int m, i, count = 0;

	for (i = 1; ; i += 2)
	{
		m = n - i;

		if (m == 0)
		{
			count++;
			return (count);
			break;
		}
		else if (m > 0)
		{
			count++;
			continue;
		}
		else
		{
			count++;
			return (count);
		}
	}
}
