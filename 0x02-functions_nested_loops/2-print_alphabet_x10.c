#include "main.h"

/**
*print_alphabet_x10 - func for forr loop acts as the beginning point
*Return: zero always
*/
void print_alphabet_x10(void)
{

	char c;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
