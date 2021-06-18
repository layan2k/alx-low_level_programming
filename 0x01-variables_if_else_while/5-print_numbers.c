#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the numbers 1-10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index = 0;

	while (index < 10)
	{
		printf("%d", index);
		index++;
	}
	putchar('\n');
	return (0);
}
