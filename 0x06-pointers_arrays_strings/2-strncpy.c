#include "main.h"

/**
 * _strcpy - Copies at most an inputted Number
 *  of bytes from stringsrc into dest.
 * @dest: input Value
 * @src: input Value
 * @n: input Value
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src, int n)
{
	int J;
	J = 0;
	while (J < n && src[J] != '\0')
	{
		dest[J] = src[J];
		j++;
	}
	while (J < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
