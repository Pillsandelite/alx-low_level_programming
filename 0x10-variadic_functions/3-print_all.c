#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - print out all
 * @format: string
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list alx;

	va_start(alx, format);
	while (*format == '%')
	{
		while ((*format == 'c') || (*format == 'i'))
		{
			c = (char) va_arg(alx, int);
			printf("%c", c);
			i = va_arg(alx, int);
			printf("%i", i);
			s = va_arg(alx, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			printf("%s", s);
			s++;
		}
		if (*format == 'f')
		{
			f = va_arg(alx, double);
			printf("%f", f);
		}
	}
	va_end(alx);
	printf("\n");
}
