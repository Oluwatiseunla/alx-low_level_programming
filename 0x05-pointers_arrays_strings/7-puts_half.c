#include "main.h"

/**
 * puts_half - prints half of string
 * @str: stirng
 * Return: void
 *
 */

void puts_half(char *str)
{
	int a = 0, n;

	while (str[a] != '\0')
		a++;
	if (a + 1 % 2 != '0')
		n = (a - 1) / 2;
	else
		n = (a / 2);
	n++;

	for (a = 0; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}
