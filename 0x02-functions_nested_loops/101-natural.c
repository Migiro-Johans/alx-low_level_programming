#include <stdio.h>
/**
  * main - Prints the sum of all multiples of 3 or 5 up to 1024
  * Return: 0
  */
int main(void)
{
	int r, b = 0;

	while (r < 1024)
	{
		if ((r % 3 == 0) || (r % 5 == 0))
		{
			b += r;
		}

		r++;
	}

	printf("%d\n", b);
	return (0);
}
