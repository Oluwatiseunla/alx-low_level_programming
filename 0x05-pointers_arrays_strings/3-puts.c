#include <string.h>
#include "main.h"

/** _puts - prints a string
 * @str - string
 *
 */

void _puts(char *str)
{
	int i = 0;

	while (string[i] !='\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
