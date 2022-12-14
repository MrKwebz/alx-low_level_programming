#include "main.h"

/**
 * _strcat - concatenates two strings, including the terminal null byte pointed to by @src to the end of the string pointed by @dest
 * @dest: pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 * Return: pointer to destination string @dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;
	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
