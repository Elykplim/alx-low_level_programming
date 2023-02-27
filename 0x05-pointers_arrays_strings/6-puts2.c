#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*puts2 - function
*@str: char parameter
*/

void puts2(char *str)
{
int i, n = strlen(str);
for (i = 0; i < n; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}

}
putchar('\n');
}
