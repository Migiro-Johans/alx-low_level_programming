#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program begins here
 * Return: 0
 */
int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
	putchar(y);
	if (y != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}

