#include <stdio.h>
/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  * Return: 0
  */
int main(void)
{
	int i = 0;
	long q = 1, k = 2, sum = k;

	while (k + q < 4000000)
	{
		k += q;

		if (k % 2 == 0)
			sum += k;

		q = k - q;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}
