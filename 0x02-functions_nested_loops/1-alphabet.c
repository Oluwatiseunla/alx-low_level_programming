#include "main.h"

/**
 * main - prints alphabets in lower case
 *
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
