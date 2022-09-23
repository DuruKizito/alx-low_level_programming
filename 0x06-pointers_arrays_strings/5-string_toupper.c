#include "main.h"

/**
 * string_toupper - function to transform all lowercase in string to uppercase
 * @x: character string pointer
 * Return: char pointer
 */
char *string_toupper(char *x)
{
	 int i = 0;

	 while (x[i] != '\0')
	 {
		 if (x[i] > 96 && x[i] <= 123)
			 x[i] -= 32;
		 i++;
	 }
	 return (x);
}
