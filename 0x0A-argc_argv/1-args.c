#include "main.h"
/**
 * main - this is the entry point
 * @argc: count
 * @argv: pointer
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	putchar(argc - 1 + '0');
	putchar('\n');
	return (0);
}
