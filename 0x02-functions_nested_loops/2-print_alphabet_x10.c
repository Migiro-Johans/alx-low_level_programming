#include "main.h"
/**
 *print_alphabet_x10 - starting point program
 * Return: void
 */

void print_alphabet_x10(void)
{
	int e;
	int a;

	for (e = 1; e<=10 ; e++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		
	}
}
