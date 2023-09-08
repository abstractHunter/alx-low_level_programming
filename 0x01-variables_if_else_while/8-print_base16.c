#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * This program prints the digit numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		i++;
	}

	i = 0;

	while (i <= 5)
	{
		putchar('a' + i);
		i++;
	}

	putchar('\n');
	return (0);
}
