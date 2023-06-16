#include <stdio.h>
#include <stdlib.h>
/**
 * main - The program begins from this main
 * Return: 0
 */
int main(void)
{
	int r;
	int s;
	int q;

	for (r = '0'; r < '9'; r++)
	{
	for (s = r + 1; s <= '9'; s++)
	{
	for (q = s + 1; q <= '9'; q++)
	{
	if ((s != r) != q)
	{
	putchar(r);
	putchar(s);
	putchar(q);
	if (r == '7' && s == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
