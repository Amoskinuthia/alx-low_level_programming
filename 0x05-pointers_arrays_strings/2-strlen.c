#include "main.h"
/**
 *_strlen - return the length of the string
 *@s: char type pointer
 *Return: length of string
 */
int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
		;

	return (b);
}
