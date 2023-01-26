#include "main.h"

/**
 * rev_string - print chars but reversed
 * @s: pointer to a char
 * Return: void
 */
char *rev_string(char *s)
{
	int i = 0;
	int len = _strlen(s);
	static char buffer[2048];

	while (len != 0)
	{
		buffer[i] = s[len - 1];
		len--;
		i++;
	}
	buffer[i] = '\0';

	return (buffer);
}
