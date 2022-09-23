#include "main.h"
#include <string.h>

/**
 * _strncpy - function to copy string
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of chars to copy
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
