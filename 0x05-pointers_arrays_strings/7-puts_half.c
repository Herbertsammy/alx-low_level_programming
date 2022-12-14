#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints 2nd half of a character
 * @str: pointer to input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n;
	int len = strlen(str);

	if  ((len % 2) != 0)
	{
		n = (len - 1) / 2;
		n += 1;
	} else
	{
		n = len / 2;
	}

	for (i = n; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
