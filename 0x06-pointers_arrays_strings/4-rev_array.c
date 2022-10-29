#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, first, last, keep, count;

	count = n / 2;
	first = 0;
	last = n - 1;

	for (i = 0; i < counts; i++)
	{
		keep = a[first];
		a[first] = a[last];
		a[last] = keep;
		first++;
		last--;
	}
}
