#include "betty.h"
#include "main.c"

/**
 * main - check code
 * Description: check uppercase letters
 * Return: Always 0.
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
