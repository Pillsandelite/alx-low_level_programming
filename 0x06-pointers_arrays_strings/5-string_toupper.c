#include "main.h"
/**
 * *string_toupper - change letters to uppercase
 *
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	while (str)
	{
		if (*str >= 'a' || *str <= 'z')
			_putchar(*str - 32);
		str++;
	}
	return (0);
}
