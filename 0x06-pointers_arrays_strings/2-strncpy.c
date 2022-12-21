#include "main.h"

/**
 * _strcpy - Copies at most an inputted Number
 *  of bytes from stringsrc into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The Maximum number of bytes to be copied from source.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
