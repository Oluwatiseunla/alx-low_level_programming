#include "main.h"

/**
 * _sqrt - returns the natural square root
 * @n: integer
 * @y:buffer
 * Return: square root of integer
 */

int _sqrt(int n, int y)
{
	if (n == 1)
		return (1);
	else if (y == n || n < 0)
		return (-1);
	else if (y * y == n)
		return (y);
	else
		return (_sqrt(n, y + 1));
}

/**
 * _sqrt_recursion - returns to the _sqrt function
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
