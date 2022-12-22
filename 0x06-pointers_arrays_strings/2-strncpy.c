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
	int j;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
