#include "main.h"
/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to the given bits
 * @index: given index of the bit.
 * Return: 1 if it worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
