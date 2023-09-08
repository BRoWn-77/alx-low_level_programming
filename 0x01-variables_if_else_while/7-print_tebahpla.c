/* File: 7-print_tebahpla.c */

#include <stdio.h>

/**
 * main - Prints all the alphabet in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
