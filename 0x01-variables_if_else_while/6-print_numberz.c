#include <stdio.h>
/**
 * main - prints numbers 0 to 10
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
