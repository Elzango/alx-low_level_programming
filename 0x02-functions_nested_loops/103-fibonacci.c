#include <stdio.h>
/**
 * main - Finds and prints the sum of even-valued terms that
 * do not excees 4000000 from the fibonacci sequence
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	long int m1, m2, n1, n2;

	m1 = 1;
	m2 = 2;
	n1 = n2 = 0;
	while (n1 <= 4000000)
	{
		n1 = m1 + m2;
		m1 = m2;
		m2 = n1;
		if ((m1 % 2) == 0)
		{
			n2 += m1;
		}
	}
	printf("%ld\n", n2);
	return (0);
}
