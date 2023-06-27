#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	for (n = n - 1; s[n] != '\0'; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
