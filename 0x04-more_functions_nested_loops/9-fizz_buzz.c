#include <stdio.h>
/**
 * main - prints the number 1 to 100
 *  except multiples of 3, 5 and 15
 * in which case prints fizz, buzz, and fizzbuzz respectively
 *
 * Return: 0 always (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 15) == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
