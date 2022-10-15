#include <stdio.h>
/**
*main - starts the program
*Return: value zero
*/
int main(void)
/* Program initialise with full force */
{
char a;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (a = 'A'; a <= 'Z'; a++)
putchar(a);
putchar('\n');
return (0);
}
