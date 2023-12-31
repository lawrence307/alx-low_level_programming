/*
 * File: 0-positive_or_negative.c
 * Auth: Lawrence Nzomo
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - Prints a number
 * @i: integer
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: Always 0.
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
