#include "main.h"
#include <string.h>

/**
 *  _strlen -> function to get the length of string
 *  @s: string pointer to passed to this funct
 *  Return: return length of the string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
