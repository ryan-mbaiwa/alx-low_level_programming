#include <stdio.h>
/**
 * main - Prints out sum of all multiples of 5 and 3 between 0 and 1024
 *
 * putchar - to print "holberton"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0, i = 1024;
while (i > 0)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum += i;
}
i--;
}
printf("%d", sum);
printf("\n");
return (0);
}
