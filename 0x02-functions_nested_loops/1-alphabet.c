#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * Return: 1 on success
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (1);
