#include "main.h"

/*
 * _leet - Encode the string to 1337.
 * @str: The string to be checked.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
int indx1 = 0, indx2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[indx2])
{
for (indx2 = 0; indx2 <= 2; indx2++)
{
if (str[indx2] == leet[indx2] ||
str[indx2] - 32 == leet[indx2])
str[indx2] = indx2 + '0';
}
indx1++;
}
return (str);
}
