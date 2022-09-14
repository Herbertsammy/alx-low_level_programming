#include "main.h"

/**
 * main - code that prints putchar
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char str[8] = "_putchar";

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
