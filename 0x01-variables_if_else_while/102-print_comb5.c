#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * This program prints all combinations of two different digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 99)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + j / 10);
			putchar('0' + j % 10);


			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
