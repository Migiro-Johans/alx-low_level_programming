#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @b: The number to be evaluated
 * Return: Absolute value or zero
 */
int _abs(int b)
{
	if (b < 0)
	{
		int abs_num;

		abs_num = (b * -1);
		return (abs_num);
	}
	return (b);

}
