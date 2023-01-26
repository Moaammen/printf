#include "main.h"

/**
  * _numlen - Return the len of a number.
  * @i: The number.
  * Return: Lenght of a number.
  */
int _numlen(unsigned int i)
{
	int count = 0;

	if (i == 0)
	{
		count++;
	}

	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}
