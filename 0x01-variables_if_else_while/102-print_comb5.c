#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2;

	for (count1 = 0; count1 < 99; count1++)
	{
		for (count2 = count1; count2 < 100; count2++)
		{
			putchar(count1 + '0');
			putchar(' ');
			putchar(count2 + '0');
			if (count1 == count2)
			{
				continue;
			}
			else if (count1 >= 10)
			{
				putchar((count1 / 10) + '0');
				putchar((count1 % 10) + '0');
			}
			else if (count2 >= 10)
			{
				putchar((count2 / 10) + '0');
				putchar((count2 % 10) + '0');
			}
			else if (count1 == 98 && count2 == 99)
				break;
			return (',');
			return (' ');
		}
	}
	return ('\n');
}
