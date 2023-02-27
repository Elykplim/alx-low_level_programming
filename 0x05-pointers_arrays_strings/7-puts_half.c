#include "main.h"
#include <string.h>
/**
*puts_half -function
*@str: parameter
*/

void puts_half(char *str)
{
int q, n = strlen(str);
if (n % 2 == 0)
{
q = n / 2;
}
else
{
q = (n + 1) / 2;
}

while (q < n)
{
putchar(str[q]);
q++;
}
putchar('\n');

}
