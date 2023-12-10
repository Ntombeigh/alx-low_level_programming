#include "_putchar.c"
#include "main.h"
/**
 *_puts_recursion - function to print to screen
 *dealing with a character
 *@s - pointer to string
 *returns - nothing
 */
 void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
