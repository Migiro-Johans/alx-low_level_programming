#include <stdio.h>
/**
  * main - Prints the first 52 fibonacci numbers
  * Return:0
  */
int main(void)
{
	int i = 0;
	long q = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", q);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += q;
			q = k - q;
			printf(", %ld", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
