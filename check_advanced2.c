#include "main.h"
/**
  * check_advanced2 - Function to excecute the switch.
  * @tmp: Character to compare.
  * @valist: List of arguments.
  * @count: Counter.
  * Return: The i incremented.
  */

int check_advanced2(char tmp, va_list valist, int *count)
{
	unsigned int c;
	unsigned long ul;
	char *chr, *out;

	switch (tmp)
	{
		case 'X':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 16, 1));
			*count += _strlen(convert_uint(c, 16, 1));
			return (1);
		case 'p':
			ul = va_arg(valist, unsigned long);
			_putchar(48);
			_putchar(120);
			_puts(convert_ulong(ul, 16, 0));
			*count += _strlen(convert_ulong(ul, 16, 0));
			*count += 2;
			return (1);
		case 'r':
			chr = va_arg(valist, char *);
			if (!(chr))
				chr = "";
			out = rev_string(chr);
			_puts(out);
			*count += _strlen(out);
			return (1);
		case 'R':
			chr = va_arg(valist, char *);
			if (!(chr))
				chr = "";
			out = rot13(chr);
			_puts(out);
			*count += _strlen(out);
			return (1);
		case '\0':
			return (1);
	}
	return (0);
}
