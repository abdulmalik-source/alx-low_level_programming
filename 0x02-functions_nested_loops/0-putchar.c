#include "main.h"
/**
 * To write a program that prints _putchar, followed by a new line
 *Return: always 0 (success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i=0;
	for (i=0; i<=8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

