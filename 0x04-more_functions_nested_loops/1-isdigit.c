#include "main.h"

/**
 * _isdigit - prints digits from 0 to 9
 *
 * @c: digit to be printed
 * Return: 1 if its a digit or zero otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
