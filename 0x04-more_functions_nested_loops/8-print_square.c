#include "main.h"

/**
* print_square - function that can print_square
* @size: size of a square
* Return: square of '#'
*/

void print_square(int size)
{
int sp, ro, sq;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (ro = 0; ro <= (size - 1); ro++)
{
for (sp = 0; sp < (size - 1) - ro; sp++)
{
_putchar(' ');
}
for (sq = 0; sq <= ro; sq++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
