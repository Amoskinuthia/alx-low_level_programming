#include "main.h"
/**
 *_meset - fills the first n bytes of mem with constant b
 *@s: memory area
 *@b:The char type to be filled in s 
 *@n:unassigned int
 *Return: pointer to the filled memory area@s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
