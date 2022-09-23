#include "main.h"

/**
 * string_toupper - function to transform all lowercase in string to uppercase
 * @x: character string pointer
 * Return: char pointer
 */
char *string_toupper(char *x)
{
	 int i = 0;

	 while (x[i])
	 {
		 if (x[i] >= 97 && x[i] <= 122)
			 x[i] = x[i] - 32;
		 i++;
	 }
	 return (x);
}
