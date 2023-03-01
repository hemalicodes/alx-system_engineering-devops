#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: input
 * @src: input
 * Return:  pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while(*ptr)
{
ptr++;
}
while(*src)
{
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return dest;
}
