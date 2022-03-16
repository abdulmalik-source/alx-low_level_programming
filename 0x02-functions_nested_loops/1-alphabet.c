#include "main.h"
/**
 * Main: Prints the alphabets in lowercase
 * Retutn: void
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
