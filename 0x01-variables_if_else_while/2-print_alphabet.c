#include <stdio.h>
/**
 *main - prints alphabets in lowercase
 *Return: 0 always (success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
