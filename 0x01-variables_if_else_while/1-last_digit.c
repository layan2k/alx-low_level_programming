#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;
    
	srand(time(0));
	n = rand() - RAND_MAX / 2;
    int l = n %10;
    if(l > 5)
    {
        printf("%d and is greater than 5\n ", l);
    }
    else if(l == 0)
    {
        printf("%d and is 0\n", l);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", l);
    }
    return (0);
}