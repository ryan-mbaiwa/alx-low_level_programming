#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: The number of aguments.
 * @argv: The array to the arguments in c
 * Return: 0 - success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc -1);
return (0);
}
