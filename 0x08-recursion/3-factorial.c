#include "main.h"
/**
 * factorial - print the factprial of a number
 * @n: number
 * Return: 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
