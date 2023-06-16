#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	int r;
	int s;

	for (r = '0'; r < '9'; r++)
	{
	for (s = r + 1; s <= '9'; s++)
	{
	if (s != r)
	{
	putchar(r);
	putchar(s);
	if (r == '8' && s == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

