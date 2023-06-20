#include "main.h"
/**
 * print_last_digit - prints the last digits
 * @r: The number to be examined
 * Return: Value of the last digit of number
 */
int print_last_digit(int r)
{
	int joh;

	joh = r % 10;
	if (joh < 0)
	{
		joh = joh * -1;
	}
	_putchar(joh + '0');

	return (joh);
}
