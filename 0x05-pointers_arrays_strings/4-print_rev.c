#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string of characters
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}