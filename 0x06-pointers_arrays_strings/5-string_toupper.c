#include "main.h"

/**
 * string_toupper - changes lowercase string to upper case string
 * @n:string
 * Return: uppercase character
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		else
		{
			continue;
		}
	}
	return (n);
}
