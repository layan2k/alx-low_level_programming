#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;

	for (index = 48; index < 58; index++)
	{
		putchar(index);
	}
	for (index = 97; index < 103; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
