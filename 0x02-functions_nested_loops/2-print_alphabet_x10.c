#include "holberton.h"
/**
 * print_alphabet - using nested loop to print alphabets multiples times
 * Return: always 0
 */
void print_alphabet(void)
{
char alpha;
int i = 1;
while(i <= 10)
{
alpha = 97;
while (alpha <= 122)
{
_putchar(alpha);
alpha++;
}
i++;
}
_putchar('\n');
}
