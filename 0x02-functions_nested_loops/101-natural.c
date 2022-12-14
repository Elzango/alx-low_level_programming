#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Computes and prints all natural numbers below 1024 that multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int m, n;

	for (m = 1; m < 1024; m++)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
			n += m;
	}
	printf("%d\n", n);
	return (0);
}
