#include <stdio.h>
/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
	char f;
	char g;

	f = 'a';
	g = 'A';
	while (f <= 'z')
	{
		putchar(f);
		f++;
	}
	while (g <= 'Z')
	{
		putchar(g);
		g++;
	}
	putchar ('\n');
	return (0);
}
