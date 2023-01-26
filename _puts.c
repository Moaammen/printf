#include "main.h"

/**
 * _puts - print like puts function
 * @str: pointer to a char
 * Return: void
 */
void _puts(char *str)
{
	int acc = 0;

	while (str[acc] != '\0')
	{
		_putchar(str[acc]);
		acc++;
	}
}
