#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: delimiter
 * @n: integer
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
