#include "main.h"
/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: The number to be computed
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, z;

	if (n >= 0 && n <= 14)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				z = a * b;
				if (z > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
