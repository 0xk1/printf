#include "main.h"

/**
 * _strlen - len of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;
	if (!s)
		s = "";


	while (*s++)
		i++;
	return (i);
}
