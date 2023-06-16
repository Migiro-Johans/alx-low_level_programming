#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program prints hexdecimals
 * Return: 0
 */
int main(void)
{
	int e;
	char j;

	for (e = '0'; e <= '9'; e++)
	putchar(e);
	for (j = 'a'; j <= 'f'; j++)
	putchar(j);
	putchar('\n');

	return (0);
}
