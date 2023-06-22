#include "main.h"

/**
 * positive_or_negative - evaluate a random value as either positive/negative
 * @i: the number to be evaluated
 * Return: void
 */
void positive_or_negative(int i)
{
        if (i > 0)
                printf("%d is positive\n", i);
        else if (i == 0)
                printf("%d is zero\n", i);
        else
                printf("%d is negative\n", i);
}
