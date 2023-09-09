#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i != j)
			{
				putchar(i / 10 + '0');   /* Print first digit of i */
				putchar(i % 10 + '0');   /* Print second digit of i */
				putchar(' ');            /* Print space */
                		putchar(j / 10 + '0');   /* Print first digit of j */
                		putchar(j % 10 + '0');   /* Print second digit of j */
                		if (i != 98 || j != 99)
                		{
                    			putchar(',');        /* Print comma if not the last combination */
                    			putchar(' ');        /* Print space */
                		}
            		}
        	}
    	}
	putchar('\n'); /* Print newline character */
	return (0);
}

