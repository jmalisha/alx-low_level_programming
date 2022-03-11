#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d ", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d \n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d \n", n, l);
	}
	return (0);
}
