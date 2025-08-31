#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args: va_list containing the string
 * Return: number of characters printed
 */
int print_rev(va_list args)
{
char *str = va_arg(args, char *);
int len = 0, count = 0;

if (!str)
str = "(null)";

while (str[len])
len++;

for (int i = len - 1; i >= 0; i--)
count += _putchar(str[i]);

return (count);
}
