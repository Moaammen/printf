#include "main.h"
/**
  * check_advanced - Function to excecute the switch.
  * @tmp: Character to compare.
  * @valist: List of arguments.
  * @count: Counter.
  * Return: The i incremented.
  */

int check_advanced(char tmp, va_list valist, int *count)
{
	unsigned int c;

	switch (tmp)
	{
		case 'b':
			c = va_arg(valist, unsigned long);
			_puts(convert_ulong(c, 2, 0));
			*count += _strlen(convert_ulong(c, 2, 0));
			return (1);
		case 'u':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 10, 0));
			*count += _strlen(convert_uint(c, 10, 0));
			return (1);
		case 'o':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 8, 0));
			*count += _strlen(convert_uint(c, 8, 0));
			return (1);
		case 'x':
			c = va_arg(valist, unsigned int);
			_puts(convert_uint(c, 16, 0));
			*count += _strlen(convert_uint(c, 16, 0));
			return (1);
	}
	return (0);
}
