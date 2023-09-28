#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer params
 * @m: integer params
 * Return: boolean
 */

int divisors(int num1, int num2)
{
	if (num2 % num1 == 0)
	{
		return (0);
	}
	else if (num2 / 2 > n)
	{
		return (divisors(num1 + 2, num2));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer params
 * Return: recursion
 */

int is_prime_number(int num)
{
	if ((!(num % 2) && num != 2) || num < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, num));
	}
}
