#include "main.h"
/**
 * _isalpha - checks whether a character is an alphabet
 * @c: The character to be evaluated
 * Return: 1 if character is alphabet, 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
