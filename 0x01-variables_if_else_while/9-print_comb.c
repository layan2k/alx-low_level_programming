#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with spaces and commas.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int index;

	for (index = 48; index < 58; index++)
	{
		putchar(index);
		if (index != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
