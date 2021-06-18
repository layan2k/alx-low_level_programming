#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
