#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always return 0
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	_putchar('\n');
}
