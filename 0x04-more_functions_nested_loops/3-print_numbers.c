#include "main.h"
/**
 * print_numbers -prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int count;

	for (count = 0; count < 10; count++)
		_putchar(count + '0');
	_putchar('\n');
}
