#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
		if (c < b && b < a)
	{
		largest = a
	}
		else if (a < b && c < a)
	{
		largest = b
	}
		else if (b < c && a < b)
	{
		largest = c
	}
	return (largest);
}