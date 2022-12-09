#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l, m1, m2;

i = j = k = l = 48;
while (l < 58)
{
	k = 48;
	while (k < 48)
	{
		j = 48;
		while (i < 58)
		{
			i = 48;
			while (i < 58)
			{
				
				m1 = (l * 10) + k;
				m2 = (j * 10) + i;
				if (m1 < m2)
				{
					putchar(l);
					putchar(k);
					putchar(' ');
					putchar(j);
					putchar(i);
					if (l == 57 && k == 56 && j == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			j++;
		}
		k++;
	
	}
	l++;
}
putchar('\n');
return (0);
}
