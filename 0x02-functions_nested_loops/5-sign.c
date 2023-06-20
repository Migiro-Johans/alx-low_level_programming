#include "main.h"
/**
 * print_sign - the prints the sign of a value
 * @n: the number to be evaluated
 * Return: 1 for positive num, -1 for negative, 0 others
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
