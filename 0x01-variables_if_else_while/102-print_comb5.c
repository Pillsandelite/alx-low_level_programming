#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int count1, count2, count3, count4;

	for (count1 = 0; count1 < 10; count1++)
	{
		for (count2 = 0; count2 < 9; count2++)
		{
			for (count3 = 0; count3 < 10; count3++)
			{
				for (count4 = 0; count4 < 10; count4++)
				{
					if (count1 == count2 || count1 == count3 || count1 == count4 || count2 == count3 || count2 == count4 || count3 == count4)
						continue;
					putchar(count1 + '0');
					putchar(count2 + '0');
					putchar(' ');
					putchar(count3 + '0');
					putchar(count4 + '0');
					if (count1 == 7 && count2 == 8 && count3 == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
