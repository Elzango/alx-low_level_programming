#include "main.h"
/**
 * get_bit - determines the value of a bit at a given index
 * @n: positive long int input.
 * @index: index position of the bit.
 * Return: value of the bit at the given index or -1 in the event of an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
