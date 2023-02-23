#include <stdio.h>
/**
 * This program takes three integers and returns the result.
 */
int main(void)
{
int a, b, c;
printf("Enter three integers: ");
scanf("%d %d %d", &a, &b, &c);
if (a >= b && a >= c)
printf("%d is the largest number.", a);
else if (b >= a && b >= c)
printf("%d is the largest number.", b);
else
printf("%d is the largest number.", c);
return (0);
}

