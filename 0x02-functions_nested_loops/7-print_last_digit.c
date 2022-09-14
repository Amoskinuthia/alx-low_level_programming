#include"main.h"
/**
*print_last_digit - print the last digit of a number
*@n: int type number
* Return: the last  value of @n
*/
int _print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
	last_digit *= -1;
	_putchar(last_digit + '0');
	}
}


