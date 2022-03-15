#include <stdio.h>
/**
 * main - main block
 * Decription: Use 'putchar' to print lowercase and then uppercase letters
 * Return : 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	
	c = 'A';
	while (c <= 'Z')
	{
		putchar('\n');
		c++;
	}
	return (0);
}

