#include <stdio.h>
/**
 * main - prints the number of arguments passed to the program in the cl.
 * @argc: The number of command line arguments.
 * @argv: The array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
