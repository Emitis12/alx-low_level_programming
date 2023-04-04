#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry point
 * @haystick: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystick, char *needle)
{
	for (; *haystick != '\0'; haystick++)
	{
		char *one = haystick;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystick);
	}

	return (NULL);
}
