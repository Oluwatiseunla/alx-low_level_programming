#include "main.h"

/**
 * print_alphabet_x10 - print alpahabets ten times
 *
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char a;

	while (a++ <= 9)
	{
		for (a = 'a' ; a <= 'z' ; a++)
			_putchar(a);
		_putchar('\n');
	}
}
