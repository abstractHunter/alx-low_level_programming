#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Failure)
 */
int main(void)
{
	char error_message[] = "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n";
	size_t message_length = sizeof(error_message) - 1;
	write(2, error_message, message_length);
	return (1);
}
