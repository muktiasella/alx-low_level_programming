#include "main.h"

/**
 * main -prints _putchar
 *
 * description:prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0 i < 8; i++)
	{
		_putchar(text[0]);
	}
	_putchar  ('\n');

	return (0);
}
