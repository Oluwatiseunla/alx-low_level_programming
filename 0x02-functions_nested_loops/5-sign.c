#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number checked
 * Return: 1 if positive, 0 for zero, and -1 for negativ
 */

int print_sign(int n)
{
	int n;

	if (n >= 0)
	{
		_putchar('+');
	}
	return (1);
	else if (n == 0)
	{
		_putchar('0');
	}
	return (0);
	else
	{
		_putchar('-');
	}
	return (-1);
}
