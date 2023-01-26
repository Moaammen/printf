#include "main.h"
#include <stdio.h>

/**
  * _printf - Function to excecute the printf.
  * @format: String of format.
  * Return: The number of charcters passed or -1.
  */

int _printf(const char *format, ...)
{
	va_list valist;
	int ans;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(valist, format);
	ans = switch_fun(format, valist);
	va_end(valist);

	return (ans);
}
