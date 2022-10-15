#include <stdio.h>
/**
 * main - Prints all alpha except q and e
 * Return: Always 0
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
			putchar(b);
	}
	putchar('\n');
	return (0);
}
