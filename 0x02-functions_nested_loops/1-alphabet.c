#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}