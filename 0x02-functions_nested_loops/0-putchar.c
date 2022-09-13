#include "main.h"
/**
*main - print_putchar followed by a new line
*print_alphabet - Print alphabet in lowercase using only `_putchar`
*Return: 0
*/
int main(void)
{
	char _putchar[] = "_putchar";
	int i = 0;

	while (_putchar != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
