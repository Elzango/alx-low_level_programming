#include <stdio.h>
/**
 * main - Prints the first fibonacci numbers
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i, b1, b2;
	long int n1, n2, f1, f2, m1, m2;

	n1 = 1;
	n2 = 2;
	b1 = b2 = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 96; i++)
	{
		if (b1)
		{
			f1 = n1 + n2;
			printf(", %ld", f1);
			n1 = n2;
			n2 = f1;
		}
		else
		{
			if (b2)
			{
				m1 = n1 % 1000000000;
				m2 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				b2 = 0;
			}
			f2 = (m1 + m2);
			f1 = n1 + n2 + (f2 / 1000000000);
			printf(", %ld", f1);
			printf("%ld", f2 % 1000000000);
			n1 = n2;
			m1 = m2;
			n2 = f1;
			m2 = (f2 % 1000000000);
		}
		if (((n1 + n2) < 0) && b1 == 1)
			b1 = 0;
	}
	printf("\n");
	return (0);
}
