#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: character to be checked
 *
 * Return: Always 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
