#include "main.h"
/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
int start = 0;
while (s[start])
start++;
while (start--)
_putchar(s[start]);
_putchar('\n');
}
