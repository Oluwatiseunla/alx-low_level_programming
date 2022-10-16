#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit
 *
 * Return:0
 */

int main(void)
{

	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d\n", n, x)
	if (x > 5)
	{
		printf("%d and is greater than 5\n", x);
	}
	else if (x == 0)
	{
		printf("%d and is 0\n", x);
	}
	else if (x < 6 && x != 0)
	{
		printf("%d and is less than 6 and not 0\n", x);
	}
	return (0);
}
