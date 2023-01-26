#include "main.h"

/**
  * check_mandatory - Function to execute the switch.
  * @tmp: Character to compare.
  * @valist: List of arguments.
  * @count: Counter of bytes.
  * Return: The i incremented.
  */

int check_mandatory(char tmp, va_list valist, int *count)
{
	int c;
	unsigned int c1;
	char *s;

	switch (tmp)
	{
		case 'c':
			c = va_arg(valist, int);
			_putchar(c);
			*count += 1;
			return (1);
		case 's':
			s = va_arg(valist, char *);
			if (!(s))
			{
				s = "(null)";
			}
			_puts(s);
			*count += _strlen(s);
			return (1);
		case '%':
			_putchar('%');
			*count += 1;
			return (1);
		case 'd': case 'i':
			c = va_arg(valist, int);
			if (c < 0)
			{
				c1 = -c;
				_putchar('-');
				*count += 1;
			}
			else
				c1 = c;

			*count += _numlen(c1);
			_puts(convert_uint(c1, 10, 0));
			return (1);
	}
	return (0);
}
