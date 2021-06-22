#include "holberton.h"
/**
 * print_alphabet - using function prototypes
 * Return: always 0
 */
void print_alphabet(void)
{
char alpha;
for (alpha = 97; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
