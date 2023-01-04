#include "main.h"

/**
* _strncat - Concatenates two strings
* @n: inputted number of bytes from src.
* @dest: The string to be appended up on.
* @src: The string to be appended to dest.
* _strncat: Concatenates two strings
*/

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int dest_lne = 0;

while (dest[index++])
dest_lne++;

for (index = 0; src[index] && index < n; index++)
dest[dest_lne++] = src[index];

return (dest);
}
