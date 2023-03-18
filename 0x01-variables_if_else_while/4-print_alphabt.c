#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = '0';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchat('\n');
	return (0);
}
