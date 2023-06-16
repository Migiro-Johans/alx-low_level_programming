#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program prints combinations of two of two-digits
 * Return: 0
 */
int main(void)
{
	int w;
	int x;

	for (w = 0; w <= 98; w++)
	{
	for (x = w + 1; x <= 99; x++)
	{
	putchar((w / 10) + '0');
	putchar((w % 10) + '0');
	putchar(' ');
	putchar((x / 10) + '0');
	putchar((x % 10) + '0');
	if (w == 98 && x == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
