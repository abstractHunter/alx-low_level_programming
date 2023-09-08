#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * This program prints all possible combinations of three different digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 9)
	{
		j = i + 1;

		while (j <= 9)
		{
			k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}

				k++;
			}

			j++;
		}

		i++;
	}

	putchar('\n');
	return (0);
}
