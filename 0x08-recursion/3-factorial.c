#include "main.h"
/**
 * factorial - finds the factorial of a given number
 * @n: The given integer
 * Return: returns the factorial of a given integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
