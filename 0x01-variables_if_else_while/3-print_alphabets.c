/* File: 3-print_alphabets.c */

#include <stdio.h>

/**
 * main - Prints all the alphabet in lowercase, then uppercase
 *
 *
 *Return: Always return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter--)
		putchar(letter);

	putchar("\n");

	return (0);
}
