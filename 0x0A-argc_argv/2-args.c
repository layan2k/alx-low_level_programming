#include <stdio.h>
/**
 * main - prints all the arguments followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;
	for (i=0; i<argc;i++)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}
