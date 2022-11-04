#include "main.h"

/**
 * _pow_recursion - returns value of power of a variable
 * @x: integer
 * @y: integer power
 *
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}
}
