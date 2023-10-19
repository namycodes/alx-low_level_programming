#include <stdio.h>

/**
 * printBeforeMainFunc - function executed before main
 * Return: no return.
 */
void printBeforeMainFunc(void)
{
	printf("You're beat! and yet, you must allow, \n"
			"I bore my house upon my back!\n");
}
/**
 * main- main funtion printing the words
 * Return: Returns 0
 */
int main(void)
{
	printBeforeMaiFunc();
	printf("Hello from main function!\n");
	return (0);
}
