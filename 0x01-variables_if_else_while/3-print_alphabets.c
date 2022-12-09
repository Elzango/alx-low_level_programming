#include <stdio.h>

/**
 * main - Prints the alphabet in lower and upper case.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
