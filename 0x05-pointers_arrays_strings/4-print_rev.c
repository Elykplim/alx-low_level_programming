#include "main.h"
#include <string.h>
/**
*print_rev- function
*@s: char parameter
*/

void print_rev(char *s)
{
int len = strlen(s) - 1;
while (len >= 0)
{
putchar(s[len]);
len--;
}
putchar('\n');
}
