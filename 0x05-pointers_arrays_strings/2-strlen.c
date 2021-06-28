#include "holberton.h"

/**
 *int _strlen - returns the length of a string.
 *@s: been the string
 * Return: length of string.
 */
int _strlen(char *s)
 {
   int c = 0;
   char s;
   *s = s;

   while(s[c] != '\0')
      c++;

   return c;
}
