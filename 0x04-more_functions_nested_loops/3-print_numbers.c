#include "main.h"
/**
 * main - prints numbers from 0 to 9
 * followed by a new line
 * return void
 */
void print_numbers(void)
{
	char c;

	for(c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}