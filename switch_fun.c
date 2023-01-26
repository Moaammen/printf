#include "main.h"

/**
  * switch_fun - Switch the tags for print in its format.
  * @format: Format passed.
  * @valist: List of arguments.
  *
  * Return: void.
  */


int switch_fun(const char *format, va_list valist, ...)
{
	const char *tmp;
	int i, found_mandatory, found_advanced, found_advanced2;

	for (tmp = format, i = 0; *tmp != '\0'; tmp++)
	{
		while (*tmp != '%')
		{
			if (*tmp == '\0')
				return (i);
			_putchar(*tmp);
			tmp++;
			i++;
		}
		if (*(tmp) == '%' && *(tmp + 1) == '\0')
			return (-1);
		tmp++;
		while (*tmp == ' ')
		{
			tmp++;
		}

		found_mandatory = check_mandatory(*tmp, valist, &i);
		found_advanced = check_advanced(*tmp, valist, &i);
		found_advanced2 = check_advanced2(*tmp, valist, &i);

		if (found_mandatory == 0 && found_advanced == 0 && found_advanced2 == 0)
		{
			_putchar('%');
			_putchar(*tmp);
			i += 2;
		}

		if (*tmp == '\0')
			break;
	}
	return (i);
}
