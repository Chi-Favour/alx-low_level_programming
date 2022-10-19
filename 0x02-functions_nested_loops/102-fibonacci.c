#include <stdio.h>
/**
 * main - prints the add of the fibonacci numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;
	int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%1d, %1d", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %1d", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
