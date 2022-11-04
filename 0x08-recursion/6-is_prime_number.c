#include "main.h"

/**
 * prime - checks if a number is prime or not
 * @a: int
 * @b: int
 *
 * Return: integer
 */

int prime(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if  (a > b / 2)
		return (1);
	else
		return (prime(a + 1, b));
}


/**
 * is_prime_number - checks if number is prime or not
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
	if  (n == 2)
		return (1);
	return (prime(2, n));
}
