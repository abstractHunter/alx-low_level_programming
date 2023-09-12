#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times using _puthar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
