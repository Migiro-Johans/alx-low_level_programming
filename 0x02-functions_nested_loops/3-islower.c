#include "main.h"
/**
 * is_lower - entry point
 * Return: 1 is_lowwer else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <=122)
	{
		return (1);
	}
	else 
		return (0);
}
