#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; j <= 90; j++)
	{
		for (j = 0; j <= 90; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
