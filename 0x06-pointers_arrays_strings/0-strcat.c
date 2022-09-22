#include  "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: char string to be concatenated to
 *@scr: char string to be appended at the end of @dest
 *Return: pointer to resulting string 'dest'
 */
char *_strcat(char *dest, char *src);
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
