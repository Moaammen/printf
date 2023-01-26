/**
 * convert_uint - convert an uint to bases 2 to 16
 * @number: number to convert
 * @base: base to convert (min 2, max 16)
 * @uppercase: 0 -> lowercase, otherwise uppercase
 * Return: Array of chars with the answer
 */
char *convert_uint(unsigned int number, int base, unsigned short uppercase)
{
	static const char digits_upper[] = "0123456789ABCDEF";
	static const char digits_lower[] = "0123456789abcdef";
	static char buffer[128];
	char *ptr;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		if (uppercase == 0)
			*--ptr = digits_lower[number % base];
		else
			*--ptr = digits_upper[number % base];

		number /= base;
	} while (number != 0);

	return (ptr);
}

/**
 * convert_ulong - convert an ulong to bases 2 to 16
 * @number: number to convert
 * @base: base to convert (min 2, max 16)
 * @uppercase: 0 -> lowercase, otherwise uppercase
 * Return: Array of chars with the answer
 */
char *convert_ulong(unsigned long number, int base, unsigned short uppercase)
{
	static const char digits_upper[] = "0123456789ABCDEF";
	static const char digits_lower[] = "0123456789abcdef";
	static char buffer[128];
	char *ptr;

	ptr = &buffer[127];
	*ptr = '\0';

	do {
		if (uppercase == 0)
			*--ptr = digits_lower[number % base];
		else
			*--ptr = digits_upper[number % base];

		number /= base;
	} while (number != 0);

	return (ptr);
}

