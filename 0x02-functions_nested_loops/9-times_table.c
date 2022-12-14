#include "main.h"

/**
 * times_table - prints multiplication table 9
 *
 */

void times_table(void)
{
	int n, m, p;

	for (n = 0 ; n <= 9 ; n++)
	{
		_putchar('0');

		for (m = 1 ; m <= 9 ; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = m * n;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
