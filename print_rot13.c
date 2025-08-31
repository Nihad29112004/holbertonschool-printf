#include "main.h"

/**
 * print_rot13 - prints a string encoded with ROT13
 * @args: va_list containing the string
 * Return: number of characters printed
 */
int print_rot13(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
char c;

if (!str)
str = "(null)";

for (int i = 0; str[i]; i++)
{
c = str[i];
if ((c >= 'A' && c <= 'Z'))
c = ((c - 'A' + 13) % 26) + 'A';
else if ((c >= 'a' && c <= 'z'))
c = ((c - 'a' + 13) % 26) + 'a';
count += _putchar(c);
}

return (count);
}
