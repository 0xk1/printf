#include "main.h"

/**
 * _strlen - len of string
 * @str: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
