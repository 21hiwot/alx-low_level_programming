#include "main.h"

/**
* print_diagonal - On a terminal that drow a diagonal function
* @n: input number
* Return: diagonal
*
*/
void print_diagonal(int n)
{
int co, sp;
if (n <= 0)
{
_putchar('\n');
}
for (co = 1; co <= n; co++)
{
for (sp = 1; sp < co; sp++)
{
_putchar('\\');
_putchar('\n');
}
}
}
