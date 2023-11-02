#include "main.h"
/**
 * main - prints a triangle followed by a new line
 * @size the number of time the triangle should be printed
 */
void print_triangle(int size)
{
	int n, m, o;

	if(size <= 0)
	{
		_putchar('\n');
	}
	for(n = 0; n < size; n++)
	{
		for(m = size - n; m > 1; m--)
		{
			_putchar(32);
		}
		for(o = 0; o <= n; o++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
