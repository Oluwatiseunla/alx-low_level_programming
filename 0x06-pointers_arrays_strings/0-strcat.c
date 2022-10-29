#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int len_dest = 0;
	int count = 0;

	while (dest[count] != '\0')
	{
		len_dest++;
		count;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[len_dest + 1] = src[n];
	}
	dest[len_dest + 1] = '\0';

	return (dest);
}
