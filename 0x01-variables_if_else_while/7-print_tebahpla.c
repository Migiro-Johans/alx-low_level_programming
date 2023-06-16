#include <stdio.h>
#include <stdlib.h>
/**
 * main - the program begins from here
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	putchar(ch);
	putchar('\n');
	return (0);
}
