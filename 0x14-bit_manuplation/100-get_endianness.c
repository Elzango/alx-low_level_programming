#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: if big endian return 0 while return 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
