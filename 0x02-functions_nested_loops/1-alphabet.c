#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}