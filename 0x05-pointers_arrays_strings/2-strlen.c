#include "main.h"

/**
 * _strlen - the length of a string.
 * @s: int variable
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
