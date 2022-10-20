#include "main.h"

/**
 * times_table - prints multiplication table 9
 *
 */

void times_table(void)
{
	int n, c;

	for (n = 0 ; n <= 8 ; n++)
	{
		for (c = 0 ; c <= 8 ; n++)
		{
			_putchar((n * c) + ', ');
		}
	}
}
