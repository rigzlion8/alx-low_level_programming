#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - create a function that searches a string for any of a set of bytes
 * @s: is the first occurrence in the string
 * @accept: matches one of the bytes, or @NULL if no such byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
