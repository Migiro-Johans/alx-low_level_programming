#include <stdio.h>
/**
 * main - starting point of the program
 * Return: 0
 */
int main(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
