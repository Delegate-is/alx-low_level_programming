#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: input
 * Return: length of string
*/

int _strlen(char *s)
{
	int i = 0, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum ++;
		pl = s[i++];
	}	

	return (sum);
}
