#include <stdio.h>

/**
 * main - prints the alphabetin lowercase,
 * followed by new lie
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
