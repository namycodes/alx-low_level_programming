#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, initial, final;
	char value1, value2;

	initial = length - 1;
	final = 0;

	while (initial > final)
	{
		value1  = s[final];
		value2 = s[initial];
		s[final] = value2;
		s[initial] = value1;
		initial--;
		final++;
	}
}
