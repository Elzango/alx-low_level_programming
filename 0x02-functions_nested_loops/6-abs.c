#include "main.h"
/**
 * abs - Computes the absolute value of a given number.
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		return (n*(-1));
	else
		return (n);
}
