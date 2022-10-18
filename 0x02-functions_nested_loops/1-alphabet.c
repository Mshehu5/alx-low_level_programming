#include "main.h"

/**
*print_alphabet - check the code for Holberton School students.
*
*Return: zero always.
*/
void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
}
