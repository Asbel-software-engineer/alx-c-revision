#include <stdio.h>
#include "main.h"
/**
 * Length of a string
 * return void
 */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while(*s++)
	length++;
	return (length);
}
