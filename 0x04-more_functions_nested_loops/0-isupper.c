#include "main.h"

/**
* _isdigit - function that checks for upper character
* @c: input is digit
* Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
