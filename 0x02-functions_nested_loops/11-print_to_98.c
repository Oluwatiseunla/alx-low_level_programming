#include "main.h"

/**
 * print_to_98 - prints number from n to 98
 *
 * @n: start number
 *
 */

void print_to_98(int n)
{
	for  (n = n ; n <= 98 ; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
